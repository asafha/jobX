/*
 * RegistrationDetails.h
 *
 *  Created on: Aug 9, 2018
 *      Author: asafhadad
 */

#ifndef REGISTRATIONDETAILS_H_
#define REGISTRATIONDETAILS_H_

#include <string>
using namespace std;

namespace JobX {

class RegistrationDetails {
friend std::ostream& operator<<(std::ostream& os, const RegistrationDetails& _reg);

public:
	RegistrationDetails();
	RegistrationDetails(const RegistrationDetails& _other);
	RegistrationDetails(const string& _userName, const string& _password);
	virtual ~RegistrationDetails();

	RegistrationDetails& operator=(const RegistrationDetails& _reg);

	void SetUserName(const string& _userName);
	void SetPassword(const string& _password);
	const string& GetuserName();
	const string& GetPassword();

private:
	string m_userName;
	string m_password;
};

};


#endif /* REGISTRATIONDETAILS_H_ */
