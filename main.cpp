#include "header.h"

int main() {
    AddressBook AddressBook1;

    Entry* Entry1 = new Entry("Daniel", "Salameh", "9493441441", "danielsalameh04@gmail.com");

    AddressBook1.addEntry(Entry1);
    AddressBook1.print();

    Entry* foundEntry = AddressBook1.findEntry("Daniel", "Salameh");
    foundEntry->print();
}