#include "Contact.hpp"

Contact::Contact() {}

const std::string& Contact::getFirstName() const
{
    return firstName_;
}
const std::string& Contact::getLastName() const 
{
    return lastName_;
}
const std::string& Contact::getNickName() const 
{
    return nickName_;
}
const std::string& Contact::getPhoneNumber() const 
{
    return phoneNumber_;
}
const std::string& Contact::getDarkestSecret() const 
{
    return darkestSecret_;
}
void Contact::setFirstName(const std::string& firstName) 
{
    firstName_ = firstName;
}
void Contact::setLastName(const std::string& lastName) 
{
    lastName_ = lastName;
}
void Contact::setNickname(const std::string& nickName) 
{
    nickName_ = nickName;
}
void Contact::setPhoneNumber(const std::string& phoneNumber) 
{
    phoneNumber_ = phoneNumber;
}
void Contact::setDarkestSecret(const std::string& darkestSecret) 
{
    darkestSecret_ = darkestSecret;
}

/*
#include "Contact.h"   // Incluir el archivo de cabecera Contact.h

Contact::Contact() {}  // Constructor opcional para un contacto vacío (inicializa variables con cadenas vacías)
// Método getter para obtener el nombre (devuelve una referencia constante a firstName_)
const std::string& Contact::getFirstName() const
{
    return firstName_;
}
const std::string& Contact::getLastName() const 
{
    return lastName_;
}
const std::string& Contact::getNickName() const 
{
    return nickName_;
}
const std::string& Contact::getPhoneNumber() const 
{
    return phoneNumber_;
}
const std::string& Contact::getDarkestSecret() const 
{
    return darkestSecret_;
}
// Método setter para establecer el nombre (recibe una referencia constante a una cadena para evitar modificaciones)
void Contact::setFirstName(const std::string& firstName) 
{
    firstName_ = firstName;
}
void Contact::setLastName(const std::string& lastName) 
{
    lastName_ = lastName;
}
void Contact::setNickname(const std::string& nickName) 
{
    nickName_ = nickName;
}
void Contact::setPhoneNumber(const std::string& phoneNumber) 
{
    phoneNumber_ = phoneNumber;
}
void Contact::setDarkestSecret(const std::string& darkestSecret) 
{
    darkestSecret_ = darkestSecret;
}
*/