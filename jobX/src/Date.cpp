/*
 * Date.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: asafhadad
 */

#include <iostream>
#include "Date.h"


namespace JobX {

Date::Date() {
	m_day = 0;
	m_month = 0;
	m_year =  0;
}

/*
Date::~Date() {
	// TODO Auto-generated destructor stub
}
*/

Date::Date(int _day, int _month, int _year)
{
	if(_day > 1 && _day <= 31)
	{
		m_day = _day;
	}
	else
	{
		//TODO:
		throw;
	}

	if(_month > 1 && _month <= 12)
	{
		m_month = _month;
	}
	else
	{
		//TODO:
		throw;
	}

	//TODO check if the is option to now the current year and be sure that is more the 16 years old
	if(_year > 1900 && _month <= 2018)
	{
		m_year = _year;
	}
	else
	{
		//TODO:
		throw;
	}
}

Date& Date::operator=(const Date& _date)
{
	if(this != &_date)
	{
		m_day = _date.m_day;
		m_month = _date.m_month;
		m_year = _date.m_year;
	}

	return *this;
}

std::ostream& operator<<(std::ostream& os, const Date& _date)
{

	std::cout<<_date.m_day<<"\\"<<_date.m_month<<"\\"<<_date.m_year<<std::endl; //1-31

	return os;
}

/*
Date::~Date() {
	// TODO Auto-generated destructor stub
}
*/

} /* namespace JobX */
