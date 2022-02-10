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
};
#endif