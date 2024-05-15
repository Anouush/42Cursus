#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

class Contact
{
    private:
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _phonenumber;
        std::string _darkestSecret;
        int     _index;

        std::string _fillfield(std::string field);
        std::string _cutLength(std::string field);

    public:
    Contact();
    ~Contact();

    void setContact(void);
    void displayContact(void);
    void viewContact(void);
    void setIndex(int i);

};

#endif