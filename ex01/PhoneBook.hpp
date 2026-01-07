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
        static const int MAX_CONTACTS = 8;
        Contact contacts_[MAX_CONTACTS];
        int numContacts_;
};

#endif

/*
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h" // Incluir el archivo de cabecera Contact.h

class PhoneBook 
{
    public:
        // Constructor (inicializa el número de contactos a 0)
        PhoneBook();

        // Agregar un contacto a la agenda (considera la capacidad máxima)
        bool addContact(const Contact& contact);

        // Buscar un contacto por índice (devuelve un puntero constante)
        const Contact* searchContact(int index) const;

        // Mostrar todos los contactos
        void displayContacts() const;

    private:
        static const int MAX_CONTACTS = 8; // Máximo número de contactos permitidos
        Contact contacts_[MAX_CONTACTS];   // Arreglo para almacenar los contactos
        int numContacts_;                  // Número actual de contactos 
};

#endif
*/