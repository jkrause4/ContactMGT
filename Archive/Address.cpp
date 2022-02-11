//Jordan Krause
//Used in class example

#include "Address.h"
#include <iostream>

using namespace std;

Address::Address()
{
	string street = "";
	string state = "";
	string zip = "";
}
Address::Address(string street, string state, string zip)
{
	this->street = street;
	this->state = state;
	this->zip = zip;
}
void Address::setStreet(string s)
{
	this->street = s;
}
void Address::setState(string st)
{
	this->state = st;
}
void Address::setZip(string z)
{
	this->zip = z;
}
void Address::setAddress(string a)
{
	this->address = a;
}
string Address::getStreet()const
{
	return street;
}
string Address::getState()const
{
	return state;
}
string Address::getZip()const
{
	return zip;
}
string Address::getAddress()const
{
	return getStreet() + "\n" + getState() + "\t" + getZip();
}
istream& operator>>(istream& in, Address& rhs)
{
    //gets street, state, zip 
    getline(in, rhs.street);
    getline(in, rhs.state);
    getline(in, rhs.zip);
    //returns street, state, zip
    return in;
}
ostream& operator<<(ostream& o, const Address& rhs)
{
    o << rhs.street << ", " << rhs.state << ", " << rhs.zip;
    return o;
}