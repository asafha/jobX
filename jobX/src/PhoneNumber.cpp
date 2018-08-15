/*
 * PhoneNumber.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: asafhadad
 */
#include <string>
#include <iostream>

#include "PhoneNumber.h"

using std::string;
using std::__cxx11::string;

namespace JobX {

PhoneNumber::PhoneNumber(const string& _pre, long _num )
{
	m_pre = _pre;
	m_number = _num;
}

void PhoneNumber::SetPre(const string& _pre)
{
	m_pre = _pre;
}

void PhoneNumber::SetNumber(long _num)
{
	m_number = _num;
}

const string& PhoneNumber::GetPre() const
{
	return m_pre;
}

long PhoneNumber::GetNumber() const
{
	return m_number;
}

const string& PhoneNumber::GetAllNumber() const
{
	string s;
	return m_pre;
}

PhoneNumber::~PhoneNumber() {
	// TODO Auto-generated destructor stub
}

std::ostream& operator<<(std::ostream& os, const PhoneNumber& _phone)
{
	std::cout<<_phone.m_pre<<"-"<<_phone.m_number<<std::endl;

	return os;
}

} /* namespace JobX */
