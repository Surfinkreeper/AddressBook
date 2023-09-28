#include "header.h"

AddressBook::AddressBook() {
    numOfEntries = 0;
}

AddressBook::~AddressBook() {
    for(auto& person: Book ) {
        delete person;
    }
}

void AddressBook::print() const {
    if( numOfEntries == 0 ) {
        cout << "Address book is empty." << endl << endl;
        return;
    }
    else {
        cout << "___________________" << endl;
        cout << "Address Book: " << endl << endl;
        for(const auto& person : Book ) {
            cout << person->firstName << " " << person->lastName << endl;
            cout << person->telephone << "\t" << person->email << endl << endl;
        }
        cout << "\b\b___________________" << endl << endl;
        return;
    }
}

void AddressBook::addEntry(const Entry& entry) {
    if( numOfEntries == BOOK_SIZE ) {
        cout << "Address book is full." << endl << endl;
        return;
    }
    else {
        Book[numOfEntries++] = new Entry(entry);
    }
}

void AddressBook::findEntry(const string fname,const string lname) const {
    for(const auto& person : Book ) {
        if( person->firstName == fname && person->lastName == lname ) {
            cout << person->firstName << " " << person->lastName << endl;
            cout << person->telephone << "\t" << person->email << endl << endl;
            return;
        }
    }
    cout << "Matching entry does not exist." << endl << endl;
    return;
}