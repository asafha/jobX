/*
 * Date.h
 *
 *  Created on: Aug 9, 2018
 *      Author: asafhadad
 */

#ifndef DATE_H_
#define DATE_H_

#include <string>
using std::string;

namespace JobX {

class Date
{
friend std::ostream& operator<<(std::ostream& os, const Date& _date);

public:
	Date();
	//virtual ~Date();
	Date(const string& _date);
	Date(int _day, int _month, int _year);

	Date& operator=(const Date& _date);

private:
	int m_day; //1-31
	int m_month; //1-12
	int m_year; //1900 - this year;
};

} /* namespace JobX */

#endif /* DATE_H_ */
