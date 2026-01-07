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
}

/*
#include "PhoneBook.h"  // Incluir el archivo de cabecera PhoneBook.h
#include <thread>

// Constructor de PhoneBook (inicializa el número de contactos a 0)
PhoneBook::PhoneBook() : numContacts_(0) {}

// Agregar un contacto a la agenda telefónica (considera la capacidad máxima)
bool PhoneBook::addContact(const Contact& contact) 
{
    if (numContacts_ == MAX_CONTACTS) 
    {
        // Agenda llena: reemplazar el contacto más antiguo (índice 0)
        contacts_[0] = contact;
        std::cout << "\nContact added successfully! (Replacing oldest contact)\n" << std::endl;
        return true;
    }
    else
    {
        // Espacio disponible: agregar el contacto al final
        contacts_[numContacts_] = contact;
        numContacts_++;
        std::cout << "\nContact added successfully!\n" << std::endl;
        return true;
    }
    return false; // En caso de error (ej.: falla al copiar el contacto)
}

// Buscar un contacto por índice (devuelve un puntero constante)
const Contact* PhoneBook::searchContact(int index) const 
{
    if (index >= 0 && index < numContacts_) 
    {
        return &contacts_[index]; // Índice válido: devolver puntero constante al contacto
    }
    return nullptr; // Índice fuera de rango: devolver nullptr
}

// Mostrar todos los contactos de la agenda en un formato básico
void PhoneBook::displayContacts() const 
{
    int i = 0;
    int strLen;
    std::cout << "   Index  |First Name| Last Name| Nickname |" << std::endl;
    std::cout << "----------|----------|----------|----------|" << std::endl;
    while (i < numContacts_) 
    {
        std::cout << i << "         |";
         // Mostrar solo los primeros 10 caracteres de cada campo (usar substr o lógica personalizada)
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
}
*/