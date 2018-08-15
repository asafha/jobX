/*
 * PhoneNumber.h
 *
 *  Created on: Aug 9, 2018
 *      Author: asafhadad
 */

#ifndef PHONENUMBER_H_
#define PHONENUMBER_H_

#include <string>
#include <iostream>
using std::string;

namespace JobX {

class PhoneNumber {
friend std::ostream& operator<<(std::ostream& os, const PhoneNumber& _phone);
public:
	PhoneNumber(const string& _pre, long _num );
	void SetPre(const string& _pre);
	void SetNumber(long _num);
	const string& GetPre() const;
	long GetNumber() const;
	const string& GetAllNumber() const;
	virtual ~PhoneNumber();

private:
	string m_pre;
	long m_number;
};

} /* namespace JobX */

#endif /* PHONENUMBER_H_ */
