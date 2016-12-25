
#include "SDPConnection.h"

SDPConnection::SDPConnection(const std::string & _name, const std::shared_ptr<SDPElement> src, const std::shared_ptr<SDPElement> dest)
	:ANamedObject(_name), m_pSource(src), m_pDest(dest)
{

}

const std::shared_ptr<SDPElement> & SDPConnection::source() const
{
	return m_pSource;
}

const std::shared_ptr<SDPElement> & SDPConnection::dest() const
{
	return m_pDest;
}

bool SDPConnection::connectedTo(const std::shared_ptr<SDPElement> & element) const
{
	return (m_pDest == element) || (m_pSource == element);
}

void SDPConnection::relinkTo(const std::shared_ptr<SDPElement> & from, const std::shared_ptr<SDPElement> & to)
{
	if(m_pDest == from)
		m_pDest = to;
	else if(m_pSource == from)
		m_pSource = to;
}

std::string SDPConnection::sourceName()
{
	return m_pSource->name();
}

std::string SDPConnection::destName()
{
	return m_pDest->name();
}

std::shared_ptr<SDPElement> SDPConnection::nameSource()
{
	return m_pSource;
}

std::shared_ptr<SDPElement> SDPConnection::nameDest()
{
	return m_pDest;
}
/////////////////////////////////////////////////////////////////////

bool SDPConnection::std()
{
	return !s_t_d_data.empty();
}

bool SDPConnection::dts()
{
	return !d_t_s_data.empty();
}

void SDPConnection::addSTD_data(const std::string & _data)
{
	s_t_d_data.push_back(_data);
}

void SDPConnection::addDTS_data(const std::string & _data)
{
	d_t_s_data.push_back(_data);
}

std::vector<std::string> SDPConnection::std_d()
{
	return s_t_d_data;
}

std::vector<std::string> SDPConnection::dts_d()
{
	return d_t_s_data;
}

void SDPConnection::clearSTD()
{
	s_t_d_data.clear();
}
void SDPConnection::clearDTS()
{
	d_t_s_data.clear();
}