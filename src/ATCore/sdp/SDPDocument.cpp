
#include "SDPDocument.h"
#include "../utils/helpers.h"
#include <libxml/tree.h>
#include <algorithm>
#include <sstream>
#include <map>
#include <string>

using namespace std;

///////////////////////////////////////////////////////////////////

inline const char * const BoolToString(bool b)
{
	return b ? "true" : "false";
}

SDPDocument::SDPDocument()
	:ADocument()
{

}

ADocument::Type SDPDocument::type() const
{
	return ADocument::Type::SDP;
}

std::string SDPDocument::name() const
{
	return mName;
}

std::vector<std::shared_ptr<SDPElement>> SDPDocument::getElements() const
{
	return mElements;
}

const std::vector<std::shared_ptr<SDPElement>> & SDPDocument::elements() const
{
	return mElements;
}

const std::vector<std::shared_ptr<SDPConnection>> & SDPDocument::connections() const
{
	return mConnections;
}

void SDPDocument::serialize(_xmlNode * document_node) const
{
}

AError SDPDocument::deserialize(_xmlNode * document_node)
{
	//Dictionary for elements
	map<int, shared_ptr<SDPElement>> element_dictionary;
	xmlNode *cur = child_for_path(document_node, "SDP");
	xml_for_each_child(cur, child)
	{
		mName = xml_prop(child, "name");
	}
	cur = child_for_path(document_node, "Elements");
	xml_for_each_child(cur, child)
	{
		int id = atoi(xml_prop(child, "id"));

		shared_ptr<SDPElement> new_el(SDPElement::createAndDeserialize(child));


		////////////////////////////////////////////////////
		bool det = to_bool(xml_prop(child, "detal"));
		new_el->mDetalization.used = det;
		if (det)
		{
			new_el->mDetalization.document_name = xml_prop(child, "detal_doc_name");
		}
		////////////////////////////////////////////////////

		mElements.push_back(new_el);

		element_dictionary[id] = new_el;
	}

	auto conn_nodes = child_for_path(document_node, "Connections");

	xml_for_each_child(conn_nodes, conn_node)
	{
		const char *_cname = xml_prop(conn_node, "name");

		//Get linked element indices
		int source_id = atoi(xml_prop(conn_node, "source_id")), dest_id = atoi(xml_prop(conn_node, "dest_id"));

		//Get links to real elements
		shared_ptr<SDPElement> src_elem = element_dictionary[source_id], dest_elem = element_dictionary[dest_id];

		//Create connection
		shared_ptr<SDPConnection> conn(new SDPConnection(_cname, src_elem, dest_elem));

		//Check for source-to-dest and dest-to-source datastreams
		xml_for_each_child(conn_node, d_node)
		{
			const char *_cname = xml_prop(d_node, "name");
			std::string sttr = _cname;
			if (sttr == "std")
			{
				bool std = to_bool(xml_prop(d_node, "std"));
				if (std)
				{
					int std_number = atoi(xml_prop(d_node, "std_number"));
					for (int i = 1; i < std_number + 1; i++)
					{
						std::string str = "std" + std::to_string(i);
						conn->addSTD_data(xml_prop(d_node, str.c_str()));
					}
				}
			}
			else
			{
				bool dts = to_bool(xml_prop(d_node, "dts"));
				if (dts)
				{
					int dts_number = atoi(xml_prop(d_node, "dts_number"));
					for (int i = 1; i < dts_number + 1; i++)
					{
						std::string str = "dts" + std::to_string(i);
						conn->addDTS_data(xml_prop(d_node, str.c_str()));
					}
				}
			}
		}

		mConnections.push_back(conn);
	}
	return AError();
}
