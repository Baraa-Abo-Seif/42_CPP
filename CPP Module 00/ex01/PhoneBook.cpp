#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook()
{
    index = 0;
    count = 0;
}


std::string getValidInput(const std::string &prompt)
{
    std::string input;

    while (true)
    {
        std::cout << prompt;
        if (!std::getline(std::cin, input))
            return std::string();

        if (!input.empty())
            return input;

        std::cout << "Input cannot be empty!" << std::endl;
    }
}

bool isDigitsOnly(const std::string &str)
{
    if (str.empty())
        return false;

    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

std::string getPhoneNumber()
{
    std::string input;

    while (true)
    {
        std::cout << "Enter phone number: ";
        if (!std::getline(std::cin, input))
            return std::string();

        if (!input.empty() && isDigitsOnly(input))
            return input;

        std::cout << "Invalid number! digits only." << std::endl;
    }
}

std::string formatField(const std::string &str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void printSearchHeader()
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
}
void printSearchTable(const Contact contacts[8], int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getNickname()) << std::endl;
    }
}

int askValidIndex(int count)
{
    std::string input;
    int idx;

    while (true)
    {
        std::cout << "Enter index: ";
        if (!std::getline(std::cin, input))
            return -1;
        if (input.empty())
        {
            std::cout << "Empty input!" << std::endl;
            continue;
        }
        if (!isDigitsOnly(input))
        {
            std::cout << "Only numbers allowed!" << std::endl;
            continue;
        }
        idx = std::atoi(input.c_str());
        if (idx < 0 || idx >= count)
        {
            std::cout << "Invalid index! valid range: 0 - " << count - 1 << std::endl;
            continue;
        }
        return idx;
    }
}

void printContactDetails(const Contact &contact)
{
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}


void PhoneBook::addContact()
{
    Contact newContact;

    std::string firstName = getValidInput("Enter first name: ");
    if (firstName.empty() && std::cin.eof())
        return;
    std::string lastName = getValidInput("Enter last name: ");
    if (lastName.empty() && std::cin.eof())
        return;
    std::string nickname = getValidInput("Enter nickname: ");
    if (nickname.empty() && std::cin.eof())
        return;
    std::string phoneNumber = getPhoneNumber();
    if (phoneNumber.empty() && std::cin.eof())
        return;
    std::string darkestSecret = getValidInput("Enter darkest secret: ");
    if (darkestSecret.empty() && std::cin.eof())
        return;

    newContact.setFirstName(firstName);
    newContact.setLastName(lastName);
    newContact.setNickname(nickname);
    newContact.setPhoneNumber(phoneNumber);
    newContact.setDarkestSecret(darkestSecret);

    contacts[index % 8] = newContact;
    index++;

    if (count < 8)
        count++;
}


void PhoneBook::searchContacts()
{
    if (count == 0)
    {
        std::cout << "PhoneBook is empty!" << std::endl;
        return;
    }

    printSearchHeader();
    printSearchTable(contacts, count);

    int idx = askValidIndex(count);
    if (idx < 0)
        return;

    printContactDetails(contacts[idx]);
}
