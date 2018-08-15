/*
 * Employed.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: asafhadad
 */
#include <iostream>

#include "Employed.h"
using namespace std;

namespace JobX {

Employed::Employed() {
	m_firstName = "";
	m_lastName = "";
}

Employed& Employed::operator=(const Employed& _other)
{
	if(this != &_other)
	{
		m_firstName = _other.m_firstName;
		m_lastName = _other.m_lastName;
		m_birthDay = _other.m_birthDay;
		m_signDate = _other.m_signDate;
		m_address = _other.m_address;
		m_registar = _other.m_registar;

	}

	return *this;
}

Employed::~Employed()
{
}

const string& Employed::GetFirstName() const
{
	return m_firstName;
}

const string& Employed::GetLastName() const
{
	return m_lastName;
}

void Employed::SetFirstName(const string& _firstName)
{
	m_firstName = _firstName;
}

void Employed::SetLastName(const string& _lastName)
{
	m_lastName = _lastName;
}

const Address& Employed::GetAddress() const
{
	return m_address;
}
void Employed::SetAddress(const Address& address)
{
	m_address = address;
}

const Date& Employed::GetBirthDay() const
{
	return m_birthDay;
}

void Employed::SetBirthDay(const Date& birthDay)
{
	m_birthDay = birthDay;
}

const RegistrationDetails& Employed::GetRegistar() const
{
	return m_registar;
}

void Employed::SetRegistar(const RegistrationDetails& _registar)
{
	m_registar = _registar;
}

const Date& Employed::GetSignDate() const
{
	return m_signDate;
}

void Employed::SetSignDate(const Date& signDate)
{
	m_signDate = signDate;
}

list<PhoneNumber> Employed::GetPhoneNumberList() const
{
	return m_phoneList;
}

void Employed::SetPhoneNumberList(PhoneNumber _phoneList)
{
	std::list<PhoneNumber>::iterator it = m_phoneList.begin();
	m_phoneList.insert (it,_phoneList);
}


ostream& operator<<(ostream& os, const Employed& _employed)
{
	cout<<"First Name: "<< _employed.m_firstName<<endl;
	cout<<"Last Name: "<< _employed.m_lastName<<endl;
	cout<<_employed.m_birthDay;
	cout<<_employed.m_signDate;
	cout<<_employed.m_address;
	cout<<_employed.m_registar;

	cout<<"Phone numbers: "<<std::endl;
	cout<<_employed.m_phoneList;
	//for (std::list<PhoneNumber>::iterator it = _employed.m_phoneList.begin(); it != _employed.m_phoneList.end(); it++)
	//{
	//	std::cout << *it << std::endl;
	//}

	return os;
}

} /* namespace JobX */
