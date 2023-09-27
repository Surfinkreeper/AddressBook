#include "header.h"

Entry::Entry() {
    firstName = "John";
    lastName = "Doe";
    telephone = "0000000000";
    email = "johndoe@empty.empty";
}

Entry::Entry(string fn) : Entry() {
    firstName = fn;
}

Entry::Entry(string fn, string ln) : Entry(fn) {
    lastName = ln;
}

Entry::Entry(string fn, string ln, string t) : Entry(fn, ln) {
    telephone = t;
}

Entry::Entry(string fn, string ln, string t, string e) : Entry(fn, ln, t) {
    email = e;
}

string const Entry::getFirstName() {
    return firstName;
}

string const Entry::getLastName() {
    return lastName;
}

string const Entry::getTelephone() {
    return telephone;
}

string const Entry::getEmail() {
    return email;
}

void const Entry::print() {
    cout << firstName << " " << lastName << endl;
    cout << telephone << "\t" << email << endl << endl;
    return;
}