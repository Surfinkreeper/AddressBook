#include "header.h"

AddressBook::AddressBook() {
    numOfEntries = 0;
}

void const AddressBook::print() {
    if( numOfEntries == 0 ) {
        cout << "Address book is empty." << endl << endl;
        return;
    }
    else {
        cout << "Address Book: " << endl << endl;
        for(const auto& entry : Book ) {
            cout << entry->getFirstName() << " " << entry->getLastName() << endl;
            cout << entry->getTelephone() << "\t" << entry->getEmail() << endl << endl;
        }
        return;
    }
}

void AddressBook::addEntry(Entry* entry) {
    if( numOfEntries == BOOK_SIZE ) {
        cout << "Address book is full." << endl << endl;
        return;
    }
    else {
        Book[numOfEntries] = entry;
        numOfEntries++;
    }
}

Entry* const AddressBook::findEntry(string fname, string lname) {
    for(const auto& entry : Book ) {
        if( entry->getFirstName() == fname && entry->getLastName() == lname ) {
            return entry;
        }
    }
    cout << "Matching entry does not exist. Returning first entry." << endl << endl;
    return Book[0];
}