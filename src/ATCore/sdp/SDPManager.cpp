
#include <string>
#include <stdlib.h>
#include "../utils/helpers.h"
#include <libxml/tree.h>
#include <libxml/parser.h>
#include "SDPManager.h"


using namespace std;

ADynamicSDP::ADynamicSDP(const std::string & xml_path)
	:mPath(xml_path), mSdpInstance(nullptr)
{
}

SDPDocument * ADynamicSDP::document() const
{
	return mSdpInstance;
}

const char * ADynamicSDP::path() const
{
	return mPath.c_str();
}

AError ADynamicSDP::load()
{
	xmlDocPtr doc = xmlParseFile(mPath.c_str());
	if (!doc)
		return AError(AT_ERROR_FILE_NOT_FOUND, "File not found");

	xmlNodePtr cur = xmlDocGetRootElement(doc);

	mSdpInstance = new SDPDocument();
	mSdpInstance->deserialize(cur);

	xmlFreeDoc(doc);
	xmlCleanupParser();

	if(!mSdpInstance)
		return AError(AT_ERROR_FILE_NOT_FOUND, "File not found");
	
	return AError();
}


SDPManager::SDPManager(const vector<std::string> sdp_path)
{
	for (auto path : sdp_path) {
		loadSDP(path);
	}	
}

AError SDPManager::loadSDP(const std::string & sdp_path)
{
	ADynamicSDP * new_sdp = new ADynamicSDP(sdp_path);
	AError res = new_sdp->load();

	if (res.OK())
	{
		mSdps.push_back(new_sdp->document());
	}

	return res;
}

const std::vector<SDPDocument*> & SDPManager::sdps() const
{
	return mSdps;
}
