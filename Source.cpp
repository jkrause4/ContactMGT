//Jordan Krause
//Used in class example

#include <iostream>
#include <fstream>
#include <vector>
#include "Contact.h"

using namespace std;

void loadContacts(istream& in, vector<Contact>& lst);
void saveContact(ostream& out, const vector<Contact>& lst);
void addContact(vector<Contact>& lst);

int main()
{
    //input text file
	ifstream fin("contact.txt");
    //output info
    ofstream fout("Text.txt");

    //create vector
    vector<Contact> myContacts;
    
    //call loadContacts funtion
    loadContacts(fin, myContacts);

    //add two contacts
    for (int i = 0; i < 2; i++)
	{
        //call addContact funtion
		addContact(myContacts);
	}
    
    //call saveContact
    saveContact(fout, myContacts);

    //closes file
    fin.close();
    fout.close();

    return 0;
}
void loadContacts(istream& in, vector<Contact>& lst)
{
    if(!in)
    {
        //Check to make sure vector is open
        cout << "file not found" << endl;
        exit(10);
    }
    Contact c;
    while (in >> c)
    {
        //put contact into vector
        lst.push_back(c);
    }
}
void saveContact(ostream& out, const vector<Contact>& lst)
{
    for(int i = 0; i < lst.size(); i++)
    {
        out << lst[i] << endl;
    }
}
void addContact(vector<Contact>& lst)
{
    //Get information to make contact
    string first, last, street, state, zip, phone;
    cout << "Enter the following information for your contact\n";
    cout << "First name: ";
    getline(cin, first);
    cout << "Last name: ";
    getline(cin, last);
    cout << "Street Address: ";
    getline(cin, street);
    cout << "State: ";
    getline(cin, state);
    cout << "Zip Code: ";
    getline(cin, zip);
    cout << "Phone: ";
    getline(cin, phone);

    //make contact
    Contact c(first, last, street, state, zip, phone);
    //put in the vector
    lst.push_back(c);
}