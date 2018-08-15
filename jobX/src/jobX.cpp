//============================================================================
// Name        : jobX.cpp
// Author      : Asaf Hadad
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Address.h"
#include "Employed.h"
#include "Date.h"
#include "RegistrationDetails.h"
#include "PhoneNumber.h"

using namespace std;
using namespace JobX;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!


	/*First employed*/
	Employed em1;
	Employed* emPtr1 = new Employed();
	em1.SetFirstName("Asaf");
	em1.SetLastName("Hadad");


	Address add1 ("Tel aviv", "Mordi Hagetaot", 27, "b", 6772834);
	Date birthDay(24, 6, 1982);
	Date signDate(8, 8, 2018);
	RegistrationDetails registartionDetails("asafha", "12345678");
	PhoneNumber mobile("054", 6255225);
	PhoneNumber home("03", 9067094);

	em1.SetBirthDay(birthDay);
	em1.SetSignDate(signDate);
	em1.SetAddress(add1);
	em1.SetRegistar(registartionDetails);
	em1.SetPhoneNumberList(mobile);
	em1.SetPhoneNumberList(home);

	std::cout<<em1;
	return 0;
}
