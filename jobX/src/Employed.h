/*
 * Employed.h
 *
 *  Created on: Aug 9, 2018
 *      Author: asafhadad
 */

#ifndef EMPLOYED_H_
#define EMPLOYED_H_

#include "Address.h"
#include "Date.h"
#include "RegistrationDetails.h"
#include "PhoneNumber.h"

#include <string>
#include <iostream>
#include <list>

using namespace std;

namespace JobX {

class Employed {
	friend ostream& operator<<(ostream& os, const Employed& _employed);
	public:
		Employed();
		virtual ~Employed();

		Employed& operator=(const Employed& _other);
		const string& GetFirstName() const;
		const string& GetLastName() const;
		void SetFirstName(const string& _firstName);
		void SetLastName(const string& _lastName);
		const Address& GetAddress() const;
		void SetAddress(const Address& address);
		const Date& GetBirthDay() const;
		void SetBirthDay(const Date& birthDay);
		const RegistrationDetails& GetRegistar() const;
		void SetRegistar(const RegistrationDetails& registar);
		const Date& GetSignDate() const;
		void SetSignDate(const Date& signDate);
		list<PhoneNumber> GetPhoneNumberList() const;
		void SetPhoneNumberList(PhoneNumber _phoneList);

	private:
		string m_firstName;
		string m_lastName;
		Date m_birthDay;
		Date m_signDate;
		Address m_address;
		RegistrationDetails m_registar;
		list<PhoneNumber> m_phoneList;
};

} /* namespace JobX */

#endif /* EMPLOYED_H_ */
