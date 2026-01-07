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
        display_contact_info(contacts_[i]); // Usar la función para mostrar los detalles completos
    }
}

// Función para mostrar detalles de un contacto individual
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

/*void PhoneBook::displayContacts() const 
{
    int i = 0;
    int strLen;
    std::cout << "   Index  |First Name| Last Name| Nickname |" << std::endl;
    std::cout << "----------|----------|----------|----------|" << std::endl;
    while (i < numContacts_) 
    {
        std::cout << i << "         |";
        strLen = contacts_[i].getFirstName().size();
        if (strLen > 10) 
            std::cout << contacts_[i].getFirstName().substr(0, 10) << "|";
        else
        {
            std::cout << contacts_[i].getFirstName();
            while (strLen < 10)
            {
                std::cout << " ";
                strLen++;
            }           
            std::cout << "|";
        }
        strLen = contacts_[i].getLastName().size();
        if (strLen > 10) 
            std::cout << contacts_[i].getLastName().substr(0, 10) << "|";
        else
        {
            std::cout << contacts_[i].getLastName();
            while (strLen < 10)
            {
                std::cout << " ";
                strLen++;
            }           
            std::cout << "|";
        }        
        strLen = contacts_[i].getNickName().size();
        if (strLen > 10) 
            std::cout << contacts_[i].getNickName().substr(0, 10) << "|";
        else
        {
            std::cout << contacts_[i].getNickName();
            while (strLen < 10)
            {
                std::cout << " ";
                strLen++;
            }           
            std::cout << "|";
        }        
        std::cout << std::endl;
        i++;
    }
}*/
