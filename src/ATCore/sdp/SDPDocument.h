#ifndef ATEnvironment_SDPDocument_h
#define ATEnvironment_SDPDocument_h

#include <vector>
#include <memory>
#include "../config.h"
#include "../ADocument.h"
#include "SDPElement.h"
#include "SDPConnection.h"


struct _xmlNode;

class AT_CORE_API SDPDocument : public ADocument
{
public:
	SDPDocument();
	virtual Type type() const override final;

	std::string name() const;

	std::vector<std::shared_ptr<SDPElement>> getElements() const;
	const std::vector<std::shared_ptr<SDPElement>> & elements() const;
	const std::vector<std::shared_ptr<SDPConnection>> & connections() const;

	virtual void serialize(_xmlNode * document_node) const override;
	virtual AError deserialize(_xmlNode * document_node) override;

private:
	std::string mName;
	std::vector<std::shared_ptr<SDPElement>> mElements;
	std::vector<std::shared_ptr<SDPConnection>> mConnections;
};

#endif