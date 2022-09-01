#include "Contact.hpp"

int Contact::_index_contact = 0;

Contact::Contact()
{
    std::cout << "Contact [" << Contact::get_index_contact() << "] created" << std::endl;
    if (Contact::_index_contact < 7)
        Contact::_index_contact += 1;
    return;
}

Contact::~Contact()
{
    std::cout << "Contact [" << Contact::get_index_contact() << "] destroyed" << std::endl;
    Contact::_index_contact -= 1;
    return;
}

std::string Contact::get_first_name()
{
    return this->_first_name;
}

std::string Contact::get_last_name()
{
    return this->_last_name;
}

std::string Contact::get_nickname()
{
    return this->_nickname;
}

std::string Contact::get_phone_number()
{
    return this->_phone_number;
}

std::string Contact::get_darkest_secret()
{
    return this->_darkest_secret;
}
    
void Contact::set_first_name(std::string str)
{
    this->_first_name = str;
}
void Contact::set_last_name(std::string str)
{
    this->_last_name = str;
}

void Contact::set_nickname(std::string str)
{
    this->_nickname = str;
}
void Contact::set_phone_number(std::string str)
{
    this->_phone_number = str;
}
void Contact::set_darkest_secret(std::string str)
{
    this->_darkest_secret = str;
}

int Contact::get_index_contact()
{
    return Contact::_index_contact;
}
