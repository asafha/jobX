/*
 * Address.h
 *
 *  Created on: Aug 9, 2018
 *      Author: asafhadad
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_

#include <string>
using std::string;

namespace JobX {

class Address {

friend std::ostream& operator<<(std::ostream& os, const Address& _address);

public:
	Address();
	virtual ~Address();

	Address(const string& _city);
	Address(const string& _city, const string& _street);
	Address(const string& _city, const string& _street, int _house);
	Address(const string& _city, const string& _street, int _house, const string& _entrance);
	Address(const string& _city, const string& _street, int _house, const string& _entrance, long _postal);

	Address& operator=(const Address& _address);
	const string& GetCity() const;
	void SetCity(const string& city);
	const string& GetEntrance() const;
	void SetEntrance(const string& entrance);
	int GetHouse() const;
	void SetHouse(int house);
	long GetPostal() const;
	void SetPostal(long postal);
	const string& GetStreet() const;
	void SetStreet(const string& street);

private:
	string m_city;
	string m_street;
	int m_house;
	string m_entrance;
	long m_postal;
};

} /* namespace JobX */

#endif /* ADDRESS_H_ */
