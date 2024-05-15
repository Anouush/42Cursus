# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

# include "Contact.hpp"

class Phonebook
{
    private:
        Contact _contacts[8];
        int     _nbContacts;
        int     _posContact;
        std::string _input;
        
        void _addContact(void);
        void _searchContact(void);
        void _setPosContact(void);

    public:
        Phonebook(void){
            _nbContacts = 0;
            _posContact = -1;
        }
        ~Phonebook(void){
        }
	    void menu(void);
};

# endif