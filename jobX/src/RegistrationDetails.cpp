/*
 * RegistrationDetails.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: asafhadad
 */

#include <iostream>
#include "RegistrationDetails.h"

namespace JobX {

RegistrationDetails::RegistrationDetails()
{
	// TODO Auto-generated constructor stub

}

RegistrationDetails::~RegistrationDetails()
{
	// TODO Auto-generated destructor stub
}


RegistrationDetails::RegistrationDetails(const RegistrationDetails& _other)
{
	m_userName = _other.m_userName;
	m_password = _other.m_password;
}

RegistrationDetails::RegistrationDetails(const string& _userName, const string& _password)
{
	m_userName = _userName;
	m_password = _password;
}

RegistrationDetails& RegistrationDetails::operator=(const RegistrationDetails& _reg)
{
	if(this != & _reg)
	{
		m_userName = _reg.m_userName;
		m_password = _reg.m_password;
	}

	return *this;
}

void RegistrationDetails::SetUserName(const string& _userName)
{
	m_userName = _userName;
}

void RegistrationDetails::SetPassword(const string& _password)
{
	m_password = _password;
}

const string& RegistrationDetails::GetuserName()
{
	return m_userName;
}

const string& RegistrationDetails::GetPassword()
{
	return m_password;
}

std::ostream& operator<<(std::ostream& os, const RegistrationDetails& _reg)
{
	std::cout<<"user Name: "<<_reg.m_userName<<std::endl;
	std::cout<<"Password: "<<_reg.m_password<<std::endl;

	return os;
}

} /* namespace JobX */
