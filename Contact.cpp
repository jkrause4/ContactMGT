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
string Address::getAddress()const
{
	return address;
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
	out << rhs.identifier <<"\n" << rhs.getName() << "\n" << rhs.address.getStreet() 
	<< "\n" << rhs.address.getState() << "\n"<< rhs.address.getZip() << "\n" 
	<< rhs.phone;
	return out;
}