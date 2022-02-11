//Jordan Krause
//Used in class example

#ifndef Address_H
#define Address_H
#include <iostream>
#include <string>

using namespace std;

class Address{
	private:
		string street;
		string state;
		string zip;
		string address;

	public:
		Address();
		Address(string, string, string);
		string getStreet()const; 
		string getState()const;
		string getZip()const;
		string getAddress()const;
		void setStreet(string s);
		void setState(string st);
		void setZip(string z);
		void setAddress(string a);
        friend istream& operator>>(istream& in, Address& rhs);
        friend ostream& operator<<(ostream& o, const Address& rhs);
};
//Jordan Krause
//Used in class example

#include "Address.h"
#include <iostream>

using namespace std;

//non argument constuctor
Address::Address()
{
    //initialize identifiers 
	string street = "";
	string state = "";
	string zip = "";
}
//parametized constructor
Address::Address(string street, string state, string zip)
{
    //invoking variables
	this->street = street;
	this->state = state;
	this->zip = zip;
}
//street setter
void Address::setStreet(string s)
{
    //sets street to s
	this->street = s;
}
//state setter
void Address::setState(string st)
{
    //sets state to st
	this->state = st;
}
//set zip
void Address::setZip(string z)
{
    //sets zip to z
	this->zip = z;
}
//set address
void Address::setAddress(string a)
{
    //sets address to a
	this->address = a;
}
//gets street
string Address::getStreet()const
{
	return street;
}
//gets state
string Address::getState()const
{
	return state;
}
//gets zip
string Address::getZip()const
{
	return zip;
}
//gets address
string Address::getAddress()const
{
    //returns the entire address
	return getStreet() + "\n" + getState() + "\t" + getZip();
}
//inputs address
istream& operator>>(istream& in, Address& rhs)
{
    //gets street, state, zip 
    getline(in, rhs.street);
    getline(in, rhs.state);
    getline(in, rhs.zip);
    //returns street, state, zip
    return in;
}
//outputs address
ostream& operator<<(ostream& o, const Address& rhs)
{
    //returns address
    o << rhs.street << ", " << rhs.state << ", " << rhs.zip;
    return o;
}
#endif