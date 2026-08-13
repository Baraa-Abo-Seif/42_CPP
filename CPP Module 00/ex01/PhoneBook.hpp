#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cctype>

class PhoneBook
{
private:
    Contact contacts[8];
    int index;
    int count;

public:
    PhoneBook();

    void addContact();
    void searchContacts();
};

#endif