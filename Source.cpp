//Jordan Krause
//Used in class example

#include <iostream>
#include <string>
#include <vector>
//#include "Address.h"
#include "Contact.h"
#include "Name.h"

using namespace std;

void saveContact(ostream& out, const vector<Contact>& lst);
void addContact(vector<Contact>& lst);

int main()
{
	Name n("Jordan", "krause");
	/*
	ifstream fin("Text.txt");
	ofstream fout("Text.txt");

	vector<Contact> myContacts;
	
	loadContacts(fin, myContacts);
	//let user add some
	for (int i = 0; i < 2; i++)
	{
		addContact(myContacts);
		return 0;
	}
	saveContacts(fout, myContacts);
	*/
	return 0;
}