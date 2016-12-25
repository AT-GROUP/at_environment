

#ifndef ATCore_SDPManager_h
#define ATCore_SDPManager_h

#include "../config.h"
#include "../AError.h"
#include "SDPDocument.h"
#include <memory>
#include <vector>
#include <map>


class AT_CORE_API ADynamicSDP
{
public:
	ADynamicSDP(const std::string & xml_path);
	AError load();
	SDPDocument * document() const;
	const char * path() const;
private:
	std::string mPath;
    
	SDPDocument * mSdpInstance;
};

class AT_CORE_API SDPManager
{
public:
	SDPManager(std::vector<std::string> sdp_path);
	AError loadSDP(const std::string & sdp_path);
	const std::vector<SDPDocument*> & sdps() const;

protected:
	std::vector<SDPDocument*> mSdps;
};

#endif
