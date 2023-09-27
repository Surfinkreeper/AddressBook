#ifndef HEADER_H_
#define HEADER_H_

#include<string>
#include<iostream>
using namespace std;

class Entry;
class AddressBook;

class Entry {
    public:
        Entry();
        Entry(string fn);
        Entry(string fn, string ln);
        Entry(string fn, string ln, string t);
        Entry(string fn, string ln, string t, string e);

        string const getFirstName();
        string const getLastName();
        string const getTelephone();
        string const getEmail();
        void const print();
    private:
        string firstName;
        string lastName;
        string telephone;
        string email;   
};

class AddressBook {
    public:
        AddressBook();

        void const print();

        void addEntry(Entry* entry);
        Entry* const findEntry(string fname, string lname);

    private:
        Entry* Book[10];
        int numOfEntries;
        const int BOOK_SIZE = 10;
};

#endif