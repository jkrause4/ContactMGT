//Jordan Krause
//Used in class example

#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
#include "Address.h"
#include "Name.h"

using namespace std;

class Contact{
private:
	Name name;
	Address address;
	string phone;
	int identifier;
	void setIdentifier();

public:
	static int totalCt;
	Contact();
    Contact (const Contact& c);
	Contact(string firstName, string lastName, string phone, string street, string state, string zip);
	void setName(string firstName, string lastName);
	void setAddress(string street, string state, string zip);
	void setPhoneNumber(string number);
	int getIdentifier()const;
	string getName()const;
	string getAddress()const;
	string getPhoneNumber()const;
	friend istream& operator>>(istream& in, Contact& rhs);
	friend ostream& operator<<(ostream& out, const Contact& rhs);
};
#endif