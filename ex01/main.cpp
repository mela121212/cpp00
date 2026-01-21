#include <iostream>
#include <string>
#include <limits>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void processAddContact(PhoneBook& phoneBook);
void processSearchContact(PhoneBook& phoneBook);
void showMenu();

void processSearchContact(PhoneBook& phoneBook)
{
    int index;
    const Contact* contact = nullptr;

    phoneBook.displayContacts();

    std::cout << "\nEnter the number of the contact to search: ";
    std::cin >> index;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    contact = phoneBook.searchContact(index);
    if (contact) {
        std::cout << "\nContact found:\n";
        display_contact_info(*contact);
    } else {
        std::cout << "\nContact not found.\n";
    }
}

void processAddContact(PhoneBook& phoneBook)
{
    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

    std::cout << "Enter first name: ";
    getline(std::cin, firstName);
    if (firstName.empty()) {
        std::cout << "\nError: first name empty\n" << std::endl;
        return;
    }

    std::cout << "Enter last name: ";
    getline(std::cin, lastName);
    if (lastName.empty()) {
        std::cout << "\nError: last name empty\n" << std::endl;
        return;
    }

    std::cout << "Enter nickname: ";
    getline(std::cin, nickName);
    if (nickName.empty()) {
        std::cout << "\nError: nickname empty\n" << std::endl;
        return;
    }

    std::cout << "Enter phone number: ";
    getline(std::cin, phoneNumber);
    if (phoneNumber.empty()) {
        std::cout << "\nError: phone number empty\n" << std::endl;
        return;
    }

    std::cout << "Enter darkest secret: ";
    getline(std::cin, darkestSecret);
    if (darkestSecret.empty()) {
        std::cout << "\nError: darkest secret empty\n" << std::endl;
        return;
    }

    Contact newContact;
    newContact.setFirstName(firstName);
    newContact.setLastName(lastName);
    newContact.setNickname(nickName);
    newContact.setPhoneNumber(phoneNumber);
    newContact.setDarkestSecret(darkestSecret);

    if (phoneBook.addContact(newContact)) {
        std::cout << "\nContact added successfully!\n" << std::endl;
    } else {
        std::cout << "\nError: Phonebook is full.\n" << std::endl;
    }
}


void showMenu()
{
    std::cout << "*-------------------------------------------*\n"
                 "|                                           |\n"
                 "|                PHONEBOOK                  |\n"
                 "|                                           |\n"
                 "|          ADD - Add a new contact          |\n"
                 "|          SEARCH - Display a contact       |\n"
                 "|          EXIT - Exit PhoneBook            |\n"
                 "|                                           |\n"
                 "*-------------------------------------------*" << std::endl;
}

int main()
{
    PhoneBook phoneBook;
    std::string command;
    bool running = true;

    while (running)
    {
        showMenu();
        getline(std::cin, command);

        if (command == "ADD") {
            processAddContact(phoneBook);
        } else if (command == "SEARCH") {
            processSearchContact(phoneBook);
        } else if (command == "EXIT") {
            running = false;
        } else {
            std::cout << "\nInvalid command. Please try again.\n";
        }
    }

    return 0;
}