#include "PhoneBook.hpp"
#include <thread>

PhoneBook::PhoneBook() : numContacts_(0) {}

bool PhoneBook::addContact(const Contact& contact) 
{
    if (numContacts_ == MAX_CONTACTS) 
    {
        contacts_[0] = contact;
        std::cout << "\nContact added successfully! (Replacing oldest contact)\n" << std::endl;
        return true;
    }
    else
    {
        contacts_[numContacts_] = contact;
        numContacts_++;
        std::cout << "\nContact added successfully!\n" << std::endl;
        return true;
    }
    return false;
}

const Contact* PhoneBook::searchContact(int index) const 
{
    if (index >= 0 && index < numContacts_) 
    {
        return &contacts_[index];
    }
    return nullptr;
}

void PhoneBook::displayContacts() const 
{
    for (int i = 0; i < numContacts_; ++i)
    {
        std::cout << "Contact #" << i << ":" << std::endl;
        display_contact_info(contacts_[i]);
    }
}

void display_contact_info(Contact contact)
{
    std::cout << std::endl;
    std::cout << "First name: " << contact.getFirstName() << std::endl;
    std::cout << "Last name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickName() << std::endl;
    std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
    std::cout << std::endl;
}

