//Jordan Krause
//Used in class example

#include "Contact.h"
using namespace std;

int Contact::totalCt = 0;

Contact::Contact()
{
	this->name = Name();
	this->address = Address();
	this->phone = "xxx-xxx-xxxx";
	this->identifier = -1;
}
Contact::Contact(string firstName, string lastName, string phone, string street, string state, string zip)
{
	;
	this->name = Name(firstName, lastName);
	this->address = Address(street, state, zip);
	this->phone = phone;
	this->identifier = totalCt;
}
Contact::Contact(const Contact& c)
{
	this->name = c.name;
	this->address = c.address;
	this->phone = c.phone;
	this->identifier = c.identifier;
}
string Contact::getName()const
{
	return name.getlastName() + ", " + name.getfirstName();
}
string Address::getAddress()const
{
	return address;
}
string Contact::getPhoneNumber()const
{
	return phone;
}
int Contact::getIdentifier()const
{
	return identifier;
}
void Contact::setName(string firstName, string lastName)
{
	name.setfirstName(firstName);
	name.setlastName(lastName);
}
void Contact::setAddress(string street, string state, string zip)
{
	address.setStreet(street);
	address.setState(state);
	address.setZip(zip);
}
void Contact::setPhoneNumber(string phone)
{
	this->phone = phone;
}
void Contact::setIdentifier()
{
	totalCt++;
	identifier = totalCt;
	//this->totalCt = identifier;
}
ostream& operator<<(ostream& out, const Contact& rhs)
{
	out << rhs.identifier <<"\n" << rhs.getName() << "\n" << rhs.address.getStreet() 
	<< "\n" << rhs.address.getState() << "\n"<< rhs.address.getZip() << "\n" 
	<< rhs.phone;
	return out;
}
istream& operator>>(istream& in, Contact& rhs)
{
	//create contact from data given in main
	in >> rhs.name;
	in >> rhs.address;
	getline(in, rhs.phone);
	rhs.setIdentifier();
	return in;
}