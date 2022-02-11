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
//Jordan Krause
//Used in class example

#include "Contact.h"
using namespace std;

//initialize totalCt to count the contacts
int Contact::totalCt = 0;

//non argument constructor
Contact::Contact()
{
	//initialize attributes
	this->name = Name();
	this->address = Address();
	this->phone = "xxx-xxx-xxxx";
	this->identifier = -1;
}
//parametized constructor
Contact::Contact(string firstName, string lastName, string phone, string street, string state, string zip)
{
	//invoke attributes
	this->name = Name(firstName, lastName);
	this->address = Address(street, state, zip);
	this->phone = phone;
	this->identifier = totalCt;
}
//copy constructor
Contact::Contact(const Contact& c)
{
	//copies data from parametized constuctor
	this->name = c.name;
	this->address = c.address;
	this->phone = c.phone;
	this->identifier = c.identifier;
}
//gets name
string Contact::getName()const
{
	return name.getlastName() + ", " + name.getfirstName();
}
//gets address
string Contact::getAddress()const
{
	return address.getStreet() + "\n" + address.getState() + "\n" + address.getZip();
}
//gets phone number
string Contact::getPhoneNumber()const
{
	return phone;
}
//get identifier
int Contact::getIdentifier()const
{
	return identifier;
}
//set name
void Contact::setName(string firstName, string lastName)
{
	//setting name from the name class
	name.setfirstName(firstName);
	name.setlastName(lastName);
}
//set address
void Contact::setAddress(string street, string state, string zip)
{
	//setting address from the address class
	address.setStreet(street);
	address.setState(state);
	address.setZip(zip);
}
//set phone number
void Contact::setPhoneNumber(string phone)
{
	//invoking phone 
	this->phone = phone;
}
//set indentifier
void Contact::setIdentifier()
{
	//start the counter
	totalCt++;
	identifier = totalCt;
}
//input data
istream& operator>>(istream& in, Contact& rhs)
{
	//create contact from data given in main
	in >> rhs.name;
	in >> rhs.address;
	getline(in, rhs.phone);
	rhs.setIdentifier();
	return in;
}
//output contact that was created
ostream& operator<<(ostream& out, const Contact& rhs)
{
	out << rhs.identifier <<"\n" << rhs.name.getlastName() << "\n" << rhs.name.getfirstName() << "\n" << rhs.address.getStreet() 
	<< "\n" << rhs.address.getState() << "\n"<< rhs.address.getZip() << "\n" 
	<< rhs.phone;
	return out;
}
#endif
