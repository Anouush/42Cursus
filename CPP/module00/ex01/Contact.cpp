#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::_fillfield(std::string field)
{
    std::string _input = "";
    bool full = false;

    std::cout << "Enter the " << field << ": " << std::endl;
    while (full == false)
    {
        if (!std::getline(std::cin, _input))
            exit(0);
        if (_input.empty())
        {
            std::cout << "The " << field << " is empty" << std::endl;
            continue;
        }
        if (std::cin.good() && !_input.empty())
			full = true;
    }
    return _input;
}

std::string Contact::_cutLength(std::string field)
{
    if (field.length() > 10)
    {
        field.resize(9);
        field += ".";
    }
    return field;
}

void Contact::setIndex(int i)
{
	this->_index = i + 1;
}

void Contact::displayContact(void)
{
    std::cout << std::setw(10) << _index << "|";
    std::cout << std::setw(10) << _cutLength(this->_firstname) << "|";
    std::cout << std::setw(10) << _cutLength(this->_lastname) << "|";
    std::cout << std::setw(10) << _cutLength(this->_nickname) << std::endl;
}

void Contact::viewContact(void)
{
    std::cout << "First name: " << this->_firstname << std::endl;
    std::cout << "Last name: " << this->_lastname << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Phone number: " << this->_phonenumber << std::endl;
    std::cout << "Darkest secret: " << this->_darkestSecret << std::endl << std::endl;
}

void Contact::setContact(void)
{
    this-> _firstname = this->_fillfield("firstname");
    this-> _lastname = this->_fillfield("lastname");
    this-> _nickname = this->_fillfield("nickname");
    this-> _phonenumber = this->_fillfield("phonenumber");
    this-> _darkestSecret = this->_fillfield("darkest secret"); 
}
