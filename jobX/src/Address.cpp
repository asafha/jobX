/*
 * Address.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: asafhadad
 */
#include <iostream>
#include "Address.h"

namespace JobX {

Address::Address()
{
	m_city = "";
	m_street = "";
	m_house = 0;
	m_entrance = "";
	m_postal = 0;
}

Address::~Address() {
	// TODO Auto-generated destructor stub
}

Address::Address(const string& _city)
{
	m_city = _city;
	m_street ="";
	m_house = 0;
	m_entrance ="";
	m_postal= 0;
}

Address::Address(const string& _city, const string& _street)
{
	m_city =_city;
	m_street = _street;
	m_house = 0;
	m_entrance ="";
	m_postal = 0;
}

Address::Address(const string& _city, const string& _street, int _house)
{
	m_city = _city;
	m_street = _street;
	m_house = _house;
	m_entrance = "";
	m_postal = 0;
}

Address::Address(const string& _city, const string& _street, int _house, const string& _entrance)
:	m_city(_city)
,	m_street(_street)
,	m_house(_house)
,	m_entrance(_entrance)
,	m_postal(0)
{
}

Address::Address(const string& _city, const string& _street, int _house, const string& _entrance, long _postal)
{
	m_city = _city;
	m_street = _street;
	m_house = _house;
	m_entrance = _entrance;
	m_postal = _postal;
}

Address& Address::operator=(const Address& _address)
{
	if(this != &_address)
	{
		m_city = _address.m_city;
		m_street = _address.m_street;
		m_house = _address.m_house;
		m_entrance = _address.m_entrance;
		m_postal = _address.m_postal;
	}

	return *this;
}

const string& Address::GetCity() const
{
	return m_city;
}

void Address::SetCity(const string& city)
{
	m_city = city;
}

const string& Address::GetEntrance() const
{
	return m_entrance;
}

void Address::SetEntrance(const string& entrance) {
	m_entrance = entrance;
}

int Address::GetHouse() const {
	return m_house;
}

void Address::SetHouse(int house) {
	m_house = house;
}

long Address::GetPostal() const {
	return m_postal;
}

void Address::SetPostal(long postal) {
	m_postal = postal;
}

const string& Address::GetStreet() const {
	return m_street;
}

void Address::SetStreet(const string& street) {
	m_street = street;
}

std::ostream& operator<<(std::ostream& os, const Address& _address)
{
	std::cout<<"Address: "<<_address.m_street<<" "<<_address.m_house<<"/"<< _address.m_entrance<< " City: "<<_address.m_city<<" "<<_address.m_postal<<std::endl;

	return os;
}

} /* namespace JobX */
