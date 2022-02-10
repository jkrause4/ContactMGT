//Jordan Krause
//Used in class example

#include "Name.h"

using namespace std;

Name::Name()
{
	firstName= "";
	lastName = "";
}
Name::Name(string firstName, string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}
string Name::getfirstName()const
{
	return firstName;
}
string Name::getlastName()const
{
	return lastName;
}
string Name::getfullName()const
{
	return firstName + ", " + lastName;
}
void Name::setfirstName(string first)
{
	firstName = first;
}
void Name::setlastName(string last)
{
	lastName = last;
}
istream& operator>>(istream& in, Name& rhs)
{
	getline(in, rhs.lastName);
	getline(in, rhs.firstName);
	return in;
}
ostream& operator<<(ostream& o, const Name& rhs)
{
	o << rhs.lastName << ", " << rhs.firstName;
	return o;
}