#include <iostream>
#include <string>
#include <limits>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;

    std::string     str;
    std::string     firstName;
    std::string     lastName;
    std::string     nickName;
    std::string     phoneNumber;
    std::string     darkestSecret;
    int             index;
    const Contact*  contact;
    bool            running = true;
    while(running)
	{
		std::cout << "\nThe program only accepts ADD, SEARCH and EXIT.\n";
        std::cout << "\nPlease, type your action and press return.\n" << std::endl;
        getline (std::cin,str);
        if (str == "ADD")
        {
            Contact newContact;
            index = 0;
            std::cout << "Enter first name: ";
            getline(std::cin, firstName);
            if (firstName != "")
            {
                newContact.setFirstName(firstName);
                index = 1;
            }
            else
                std::cout << "\nError: first name empty\n" << std::endl;         
            if (index == 1)
            {
                std::cout << "Enter last name: ";
                getline(std::cin, lastName);
                if (lastName != "")
                {
                    newContact.setLastName(lastName);
                    index = 2;
                }
                else
                    std::cout << "\nError: last name empty\n" << std::endl; 
            }
            if (index == 2)
            {            
                std::cout << "Enter nickname: ";
                getline(std::cin, nickName);            
                if (nickName != "")
                {
                    newContact.setNickname(nickName);
                    index = 3;
                }
                else
                    std::cout << "\nError: nickname empty\n" << std::endl;  
            }            
            if (index == 3)
            {
                std::cout << "Enter phone number: ";
                getline(std::cin, phoneNumber);
                if (phoneNumber != "")
                {
                    newContact.setPhoneNumber(phoneNumber);
                    index = 4;
                }
                else
                    std::cout << "\nError: phone Number empty\n" << std::endl; 
            }            
            if (index == 4)
            {
                std::cout << "Enter darkest secret: ";
                getline(std::cin, darkestSecret);
                if (darkestSecret != "")
                {
                    newContact.setDarkestSecret(darkestSecret);
                    index = 5;
                }
                else
                    std::cout << "\nError: darkest Secret empty\n" << std::endl; 
            }
            if (index == 5)
            {
                if (phoneBook.addContact(newContact))
                {
                    std::cout << "\nContact added successfully!\n" << std::endl;
                }
                else
                    std::cout << "\nError: Phonebook is full.\n" << std::endl;
            }                
        }
        else if (str == "SEARCH")
        {
            phoneBook.displayContacts();

            std::cout << "\nEnter the number of the contact to search: ";
            std::cin >> index;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            contact = phoneBook.searchContact(index);
            if (contact)
            {
                std::cout << "\nContact found:\n";
                std::cout << "First name: " << contact->getFirstName() << std::endl;
                std::cout << "Last name: " << contact->getLastName() << std::endl;
                std::cout << "Nickname: " << contact->getNickName() << std::endl;
                std::cout << "Phone number: " << contact->getPhoneNumber() << std::endl;
                std::cout << "Darkest secret: " << contact->getDarkestSecret() << std::endl;
            }
            else
            {
                std::cout << "\nContact not found.\n";
            }
        }
        else if (str == "EXIT")
        {
            running = false;
            return (0);
        }
        else
        {
            std::cout << "\nInvalid command. Please try again.\n";
        }

    }
    return (0);
}

/*
#include <iostream>    // Libreria para entrada/salida de datos (cout, cin)
#include <string>      // Libreria para manipulación de cadenas (string, getline)
#include <limits>      // Libreria para numeric_limits (se usa para limpiar el búfer de entrada)
#include "Contact.h"   // Incluir archivo de cabecera para la clase Contact
#include "PhoneBook.h" // Incluir archivo de cabecera para la clase PhoneBook

int main()
{
    // Crear una instancia de la clase PhoneBook
    PhoneBook phoneBook; // Declaro phoneBook

    std::string     str;           // Variable para almacenar la entrada del usuario       
    std::string     firstName;     // Variable para almacenar el nombre
    std::string     lastName;      // Variable para almacenar el apellido
    std::string     nickName;      // Variable para almacenar el apodo
    std::string     phoneNumber;   // Variable para almacenar el número de teléfono
    std::string     darkestSecret; // Variable para almacenar el secreto oscuro
    int             index;         // Variable para almacenar el index del contacto a buscar
    const Contact*  contact;       // Variable para almacenar los datos del contacto a buscar
    bool            running = true; // Variable para controlar el bucle principal
    while(running) // Bucle infinito para interacción continua
	{
		// Muestro las instrucciones del programa y solicit0 la acción del usuario
        std::cout << "\nThe program only accepts ADD, SEARCH and EXIT.\n";
        std::cout << "\nPlease, type your action and press return.\n" << std::endl;
        // leo la línea introducida por el usuario y la almaceno en la variable str
		getline (std::cin,str);
        // Manejo la entrada del usuario según el comando ingresado
        if (str == "ADD")
        {
            // Funcionalidad para agregar un nuevo contacto
            Contact newContact;  // Declaración de un nuevo contacto
            index = 0;
            // Obtener el nombre
            std::cout << "Enter first name: ";
            getline(std::cin, firstName);
            if (firstName != "")
            {
                newContact.setFirstName(firstName);
                index = 1;
            }
            else
                std::cout << "\nError: first name empty\n" << std::endl;         
            if (index == 1)
            {
                // Obtener el apellido
                std::cout << "Enter last name: ";
                getline(std::cin, lastName);
                if (lastName != "")
                {
                    newContact.setLastName(lastName);
                    index = 2;
                }
                else
                    std::cout << "\nError: last name empty\n" << std::endl; 
            }
            if (index == 2)
            {            
                // Obtener el apodo
                std::cout << "Enter nickname: ";
                getline(std::cin, nickName);            
                if (nickName != "")
                {
                    newContact.setNickname(nickName);
                    index = 3;
                }
                else
                    std::cout << "\nError: nickname empty\n" << std::endl;  
            }            
            if (index == 3)
            {
                // Obtener el número de teléfono
                std::cout << "Enter phone number: ";
                getline(std::cin, phoneNumber);
                if (phoneNumber != "")
                {
                    newContact.setPhoneNumber(phoneNumber);
                    index = 4;
                }
                else
                    std::cout << "\nError: phone Number empty\n" << std::endl; 
            }            
            if (index == 4)
            {
                // Obtener ael secreto más oscuro
                std::cout << "Enter darkest secret: ";
                getline(std::cin, darkestSecret);
                if (darkestSecret != "")
                {
                    newContact.setDarkestSecret(darkestSecret);
                    index = 5;
                }
                else
                    std::cout << "\nError: darkest Secret empty\n" << std::endl; 
            }
            if (index == 5)
            {
                // Agregar el nuevo contacto a phonebook
                if (phoneBook.addContact(newContact))
                {
                    std::cout << "\nContact added successfully!\n" << std::endl;
                }
                else
                    std::cout << "\nError: Phonebook is full.\n" << std::endl;
            }                
        }
        else if (str == "SEARCH")
        {
            phoneBook.displayContacts(); // Mostrar todos los contactos

            std::cout << "\nEnter the index of the contact to search: ";
            std::cin >> index; // Obtener el índice para buscar

             // Limpia el estado de cin y limpia el búfer de entrada
            std::cin.clear(); // Clear any error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear remaining input buffer

            contact = phoneBook.searchContact(index); // Buscar el contacto por índice
            if (contact)
            {
                // Mostrar información de contacto si se encuentra
                std::cout << "\nContact found:\n";
                std::cout << "First name: " << contact->getFirstName() << std::endl;
                std::cout << "Last name: " << contact->getLastName() << std::endl;
                std::cout << "Nickname: " << contact->getNickName() << std::endl;
                std::cout << "Phone number: " << contact->getPhoneNumber() << std::endl;
                std::cout << "Darkest secret: " << contact->getDarkestSecret() << std::endl;
            }
            else
            {
                std::cout << "\nContact not found.\n";
            }
        }
        else if (str == "EXIT")
        {
            // Salir del programa con un mensaje
            std::cout << "\n¡El programa se cierra y los contactos se pierden para siempre!\n" << std::endl;
            running = false; // Cambiar la variable para salir del bucle
            return (0);
        }
        else
        {
            std::cout << "\nInvalid command. Please try again.\n"; // Manejar comandos inválidos
        }

    }
    return (0);
}
*/