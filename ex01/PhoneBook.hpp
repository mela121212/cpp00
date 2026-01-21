#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook 
{
    public:
        PhoneBook();

        bool addContact(const Contact& contact);

        const Contact* searchContact(int index) const;

        void displayContacts() const;

    private:
        static const int MAX_CONTACTS = 8; //no pertenece a un objeto individual de la clase PhoneBook, sino que pertenece a la clase PhoneBook en general. (constante global)
        Contact contacts_[MAX_CONTACTS];
        int numContacts_;
};

void display_contact_info(Contact contact);

#endif
