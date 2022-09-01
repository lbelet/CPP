#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <cstring>
# include <iomanip>
# include <iostream>
# include <string>
# include <cstdlib>
# include <algorithm>

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    void welcome();
    void add();
    void search();
    void result(int i);
    int print_all_contacts();
    void add_first_name(int index);
    void add_last_name(int index);
    void add_nickname(int index);
    void add_phone_number(int index);
    void add_darkest_secret(int index);
    std::string truncated(std::string str);

private:
    Contact contacts[8];

};
#endif