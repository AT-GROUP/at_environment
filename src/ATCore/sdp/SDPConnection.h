
#ifndef ATCore_SDPConnection_h
#define ATCore_SDPConnection_h

#include "../config.h"
#include "../ANamedObject.h"
#include "SDPElement.h"
#include <memory>

class AT_CORE_API SDPConnection : public ANamedObject
{
public:
	SDPConnection(const std::string & _name, std::shared_ptr<SDPElement> src, const std::shared_ptr<SDPElement> dest);

	const std::shared_ptr<SDPElement> & source() const;
	const std::shared_ptr<SDPElement> & dest() const;

	std::string sourceName();
	std::string destName();
	std::shared_ptr<SDPElement> nameSource();
	std::shared_ptr<SDPElement> nameDest();

	/////////////////////////////
	bool std();
	bool dts();
	void setSTD(bool t_f);
	void setDTS(bool t_f);
	void addSTD_data(const std::string & _data);
	void addDTS_data(const std::string & _data);

	void clearSTD();
	void clearDTS();

	std::vector<std::string> std_d();
	std::vector<std::string> dts_d();

	double x_to_y;
	///////////////////////////////

	bool connectedTo(const std::shared_ptr<SDPElement> & element) const;
	void relinkTo(const std::shared_ptr<SDPElement> & from, const std::shared_ptr<SDPElement> & to);
private:
	std::shared_ptr<SDPElement> m_pSource, m_pDest;
	std::vector<std::string> s_t_d_data, d_t_s_data;
};

#endif
