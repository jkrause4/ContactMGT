//Jordan Krause
//Used in class example

#ifndef NAME_H
#define NAME_H
#include <iostream>
#include <string>

using namespace std;

class Name
{
	private:
		string firstName;
		string lastName;
        string fullName;
	public:
		Name();
		Name(string, string);
		string getfirstName()const;
		string getlastName()const;
		string getfullName()const;
		void setfirstName(string first);
		void setlastName(string last);
		void setfullName(string full);
		friend istream& operator>>(istream& in, Name& rhs);
		friend ostream& operator<<(ostream& o, const Name& rhs);
};
//Jordan Krause
//Used in class example

#include "Name.h"
#include <iostream>

using namespace std;

//non argument constuctor
Name::Name()
{
    //initialize identifiers
	firstName= "";
	lastName = "";
}
//parametized constructor
Name::Name(string firstName, string lastName)
{
    //invokes identifiers
	this->firstName = firstName;
	this->lastName = lastName;
}
//gets first name
string Name::getfirstName()const
{
	return firstName;
}
//gets last name
string Name::getlastName()const
{
	return lastName;
}
//gets entire name
string Name::getfullName()const
{
	return firstName + ", " + lastName;
}
//sets first name
void Name::setfirstName(string first)
{
	firstName = first;
}
//sets last name
void Name::setlastName(string last)
{
	lastName = last;
}
//inputs the name information
istream& operator>>(istream& in, Name& rhs)
{
    //gets the first and last name 
	getline(in, rhs.lastName);
	getline(in, rhs.firstName);
    //returns full name
	return in;
}
//outputs the full name 
ostream& operator<<(ostream& o, const Name& rhs)
{
	o << rhs.lastName << ", " << rhs.firstName;
	return o;
}
#endif