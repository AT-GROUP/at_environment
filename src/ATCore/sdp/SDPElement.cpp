
#include "SDPElement.h"
#include "SDPConnection.h"
#include "../utils/helpers.h"
#include <algorithm>
#include <libxml/tree.h>

using namespace std;

inline const char * const BoolToString(bool b)
{
  return b ? "true" : "false";
}

SDPElement::SDPElement(const std::string & _name, const std::string & comment)
	:ANamedObject(_name), mComment(comment)
{
	mDetalization.used = false;
}

bool SDPElement::isDetalized() const
{
	return mDetalization.used;
}

void SDPElement::serialize(_xmlNode * element_node)
{
}

AError SDPElement::deserialize(_xmlNode * element_node)
{
	//Name
	ANamedObject::deserialize(element_node);
	
	const char * cid = xml_prop(element_node, "id");
	setId(atoi(cid));

	return AError();
}

int SDPElement::id() const
{
	return mId;
}

void SDPElement::setId(const int new_id)
{
	mId = new_id;
}

SDPElement * SDPElement::createAndDeserialize(_xmlNode * element_node)
{
	auto _type = atoi(xml_prop(element_node, "type"));

	SDPElement * new_el(nullptr);

	switch(static_cast<SDPElement::Type>(_type))
	{
	case SDPElement::Type::Entity:
		{
			new_el = new SDPEntity();
			break;
		}
	case SDPElement::Type::Function:
		{
			new_el = new SDPFunction();
			break;
		}
	case SDPElement::Type::Storage:
		{
			new_el = new SDPStorage();
			break;
		}
	case SDPElement::Type::NFFunction:
		{
			new_el = new SDPNFFunction();
			break;
		}
	default:
		break;
	}

	new_el->deserialize(element_node);

	return new_el;
}

//======================SDPEntity===============================
SDPEntity::SDPEntity(const std::string & _name, const std::string & comment)
	:SDPElement(_name, comment)
{
}

SDPElement::Type SDPEntity::type() const
{
	return Type::Entity;
}

//======================SDPFunction===============================
SDPFunction::SDPFunction(const std::string & _name, const std::string & comment)
	:SDPElement(_name, comment)
{
}

SDPElement::Type SDPFunction::type() const
{
	return Type::Function;
}

//======================SDPStorage===============================

SDPStorage::SDPStorage(const std::string & _name, const std::string & comment)
	:SDPElement(_name, comment)
{
}

SDPElement::Type SDPStorage::type() const
{
	return Type::Storage;
}

//======================SDPStorage===============================

SDPNFFunction::SDPNFFunction(const std::string & _name, const std::string & comment)
	:SDPElement(_name, comment)
{
}

SDPElement::Type SDPNFFunction::type() const
{
	return Type::NFFunction;
}


