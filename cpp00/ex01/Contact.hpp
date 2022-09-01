#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string.h>

class Contact
{

public:
    Contact();
    ~Contact();

    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();
    std::string get_phone_number();
    std::string get_darkest_secret();

    static int  get_index_contact();
    
    void set_first_name(std::string str);
    void set_last_name(std::string str);
    void set_nickname(std::string str);
    void set_phone_number(std::string str);
    void set_darkest_secret(std::string str);

private:
    static int      _index_contact;
    std::string     _first_name;
    std::string     _last_name;
    std::string     _nickname;
    std::string     _phone_number;
    std::string     _darkest_secret;
};

#endif