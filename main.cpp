#include "header.h"

int main() {
    AddressBook AddressBook1;

    Entry person1 = {"Daniel", "Salameh", "9499999999", "danielsalameh04@gmail.com"};
    Entry person2 = {"Steve", "Salinas", "9329093451", "steve@steven.steve"};
    Entry person3 = {"Bob", "Builder", "0001112222", "Bobthebuilder@ivc.edu"};
    Entry person4 = {"John", "Doe", "0000000000", "johndoe@gmail.com"};
    Entry person5 = {"Person", "Five", "1234567890", "personemail@mail.com"};
    Entry person6 = {"Jake", "Finn", "9491112222", "jakethedog@mail.com"};
    Entry person7 = {"Giles", "Gile", "7143653496", "gilesperson@email.com"};
    Entry person8 = {"Man", "Person", "7541235467", "newemail@gmail.com"};
    Entry person9 = {"Find", "This", "8561236504", "thisisaperson@yahoo.com"};
    Entry person10 = {"Samantha", "Sam", "6574531012", "samantha@uci.edu"};
    Entry person11 = {"Book", "IsFull", "1010101010", "thebookisfull@ivc.edu"};

    AddressBook1.addEntry(person1);
    AddressBook1.addEntry(person2);
    AddressBook1.addEntry(person3);
    AddressBook1.addEntry(person4);
    AddressBook1.addEntry(person5);
    AddressBook1.addEntry(person6);
    AddressBook1.addEntry(person7);
    AddressBook1.addEntry(person8);
    AddressBook1.addEntry(person9);
    AddressBook1.addEntry(person10);

    //Adding an 11th entry
    AddressBook1.addEntry(person11);

    //Printing the address book
    AddressBook1.print();

    //Search for a person
    AddressBook1.findEntry("Daniel", "Salameh");

    //Search for person not in the book;
    AddressBook1.findEntry("Not", "Real");

    return 0;
}