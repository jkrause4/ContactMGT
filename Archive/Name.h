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
#endif