#ifndef HEADER_H_
#define HEADER_H_

#include<string>
#include<iostream>
using namespace std;

struct Entry;
class AddressBook;

struct Entry {
    string firstName;
    string lastName;
    string telephone;
    string email;
};

class AddressBook {
    public:
        AddressBook();
        ~AddressBook();

        void print() const;

        void addEntry(const Entry& entry);
        void findEntry(const string fname, const string lname) const;

    private:
        const static int BOOK_SIZE = 10;
        Entry* Book[BOOK_SIZE];
        int numOfEntries;
};

#endif