
#ifndef ATCore_SDPElement_h
#define ATCore_SDPElement_h

#include "../config.h"
#include "../ANamedObject.h"
#include "../utils/geometry.h"

#include <string>
#include <vector>
#include <memory>


/////////////////////// object layer ////////////////////////////////////

class SDPDocument;
class _xmlNode;

class AT_CORE_API SDPElement : public ANamedObject
{
public:
	//std::string mName;
	std::string mComment;

	enum class Type {Entity, Storage, Function, NFFunction};
	virtual Type type() const=0;

	SDPElement(const std::string & _name = "", const std::string & comment = "");

	std::string GetComment()
	{
		return mComment;
	}

	void SetComment(std::string comm)
	{
		mComment = comm;
	}

	bool isDetalized() const;

	virtual void serialize(_xmlNode * element_node);

	virtual AError deserialize(_xmlNode * element_node);

	int id() const;
	void setId(const int new_id);

	static SDPElement * createAndDeserialize(_xmlNode * element_node);
private:
	std::vector<SDPElement*> mChildren;
	int mId;

public:
	struct
	{
		bool used;
		std::string document_name;
		std::shared_ptr<SDPDocument> document;
	} mDetalization;
};


class AT_CORE_API SDPEntity : public SDPElement
{
public:
	SDPEntity(const std::string & _name = "", const std::string & comment = "");
	virtual Type type() const override;
};


class AT_CORE_API SDPFunction : public SDPElement
{
public:
	SDPFunction(const std::string & _name = "", const std::string & comment = "");
	virtual Type type() const;
};


class AT_CORE_API SDPStorage : public SDPElement
{
public:
	SDPStorage(const std::string & _name = "", const std::string & comment = "");
	virtual Type type() const;
};


class AT_CORE_API SDPNFFunction : public SDPElement
{
public:
	SDPNFFunction(const std::string & _name = "", const std::string & comment = "");
	virtual Type type() const;
};
 
#endif
