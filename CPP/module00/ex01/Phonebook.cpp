#include "Phonebook.hpp"

void Phonebook::_setPosContact(void)
{
    if (this->_posContact >= 7)
        this->_posContact = 0;
    else
        this->_posContact++;
}

void Phonebook::_addContact(void)
{
    _setPosContact();
    if (_nbContacts < 8) {
        _contacts[_posContact].setContact();
        this->_nbContacts++;
    } else {
        //_posContact = 0; // Vuelve al principio del arreglo
        _contacts[_posContact].setContact();
    }
}

void Phonebook::_searchContact(void)
{
    int i;
    std::cout << "     index|first name| last name| nickname" << std::endl;
    if (_nbContacts > 0)
    {
        i = 0;
        while (i < _nbContacts)
        {
            _contacts[i].setIndex(i);
            _contacts[i].displayContact();
            i++;
        }
        bool indexValid = false;
        while (!indexValid)
        {
            std::cout << "Enter the index of the contact: " << std::flush;
            std::string _contactIndex = "";
            int num;
            if (!std::getline(std::cin, _contactIndex))
                exit(0);
            if (_contactIndex.length() == 1 && _contactIndex[0] > '0' && _contactIndex[0] <= '8')
            {
                if ((num = _contactIndex[0] - '1') < _nbContacts)
                {
                    std::cout << std::endl;
                    _contacts[num].viewContact();
                    indexValid = true;
                }
                else
                    std::cout << "Invalid index" << std::endl;
            }
            else
                std::cout << "Invalid index" << std::endl;
        }
    }
    else
        std::cout << "No contacts" << std::endl << std::endl;
}

void Phonebook::menu(void)
{
   
    std::cout << "Welcome to PHONEBOOK, please choose an option:" << std::endl << std::endl;
	while (1)
	{
		std::cout << "ADD ......... Add a new contact" << std::endl;
		std::cout << "SEARCH ...... Search for a contact" << std::endl;
		std::cout << "EXIT ........ Close the program" << std::endl;
		std::cout << "Enter command: ";
		if (!std::getline(std::cin, this->_input))
			exit(0);
		if (_input.compare("EXIT") == 0)
			//_on = false;
            break;
		else if (_input.compare("ADD") == 0)
			_addContact();
		else if (_input.compare("SEARCH") == 0)
			_searchContact();
		else
			std::cout << "Invalid command: " << _input << std::endl;
	}
}


