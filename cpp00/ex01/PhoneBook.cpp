#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBook created" << std::endl;
    std::cout << std::endl;
    welcome();
    return ;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook destroyed" << std::endl;
    return ;
}

void PhoneBook::welcome()
{
    std::cout << "Phonebook" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "please enter a command:" << std::endl;
    std::cout << "ADD : add a contact in your phonebook" << std::endl;
    std::cout << "SEARCH : display your contacts and search one" << std::endl;
    std::cout << "EXIT : exit your phonebook" << std::endl;
    std::cout << "Please note that commands are case sensitive. Enjoy" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;    
}

void PhoneBook::add_first_name(int index)
{
    std::string str;
    size_t space = 0;

    std::cout << "Please enter first name: ";
    getline(std::cin, str);
    for (int i = 0; isspace(str[i]); i++)
        space++;
    while (str.empty() || space == str.length())
    {
        space = 0;
        std::cout << "Please enter first name: ";
        getline(std::cin, str);
        for (int i = 0; isspace(str[i]); i++)
            space++;
    }
    contacts[index % 8].set_first_name(str);
}

void PhoneBook::add_last_name(int index)
{
    std::string str;
    size_t space = 0;

    std::cout << "Please enter last name: ";
    getline(std::cin, str);
    for (int i = 0; isspace(str[i]); i++)
        space++;
    while (str.empty() || space == str.length())
    {
        space = 0;
        std::cout << "Please enter last name: ";
        getline(std::cin, str);
        for (int i = 0; isspace(str[i]); i++)
            space++;
    }
    contacts[index % 8].set_last_name(str);
}

void PhoneBook::add_nickname(int index)
{
    std::string str;
    size_t space = 0;

    std::cout << "Please enter nickname: ";
    getline(std::cin, str);
    for (int i = 0; isspace(str[i]); i++)
        space++;
    while (str.empty() || space == str.length())
    {
        space = 0;
        std::cout << "Please enter nickname: ";
        getline(std::cin, str);
        for (int i = 0; isspace(str[i]); i++)
            space++;
    }
    contacts[index % 8].set_nickname(str);
}

void PhoneBook::add_phone_number(int index)
{
    std::string str;
    size_t space = 0;

    std::cout << "Please enter phone number: ";
    getline(std::cin, str);
    for (int i = 0; isspace(str[i]); i++)
        space++;
    while (str.empty() || space == str.length())
    {
        space = 0;
        std::cout << "Please enter phone number: ";
        getline(std::cin, str);
        for (int i = 0; isspace(str[i]); i++)
            space++;
    }
    contacts[index % 8].set_phone_number(str);
}

void PhoneBook::add_darkest_secret(int index)
{
    std::string str;
    size_t space = 0;

    std::cout << "Please enter darkest secret: ";
    getline(std::cin, str);
    for (int i = 0; isspace(str[i]); i++)
        space++;
    while (str.empty() || space == str.length())
    {
        space = 0;
        std::cout << "Please enter darkest secret: ";
        getline(std::cin, str);
        for (int i = 0; isspace(str[i]); i++)
            space++;
    }
    contacts[index % 8].set_darkest_secret(str);
}

void PhoneBook::add()
{
    static int index = 0;

    add_first_name(index);
    add_last_name(index);
    add_nickname(index);
    add_phone_number(index);
    add_darkest_secret(index);

    index++;
}

void PhoneBook::result(int i)
{
    std::cout << "First name      : " << contacts[i - 1].get_first_name() << std::endl;
	std::cout << "Last name       : " << contacts[i - 1].get_last_name() << std::endl;
	std::cout << "Nickname        : " << contacts[i - 1].get_nickname() << std::endl;
	std::cout << "Phone number    : " << contacts[i - 1].get_phone_number() << std::endl;
	std::cout << "Darkest secret  : " << contacts[i - 1].get_darkest_secret() << std::endl;
}

void PhoneBook::search()
{
    int i;
    int amount;

    std::string str;
    if (!(contacts[0].get_first_name()).empty())
    {
        amount = print_all_contacts();
        while (1)
        {
            std::cout << "Enter index number: ";
            getline(std::cin, str);
            i = atoi(str.c_str());
            if (i > amount || i < 1)
                std::cout << "Error: not a valid number" << std::endl;
            else
            {
                result(i);
                break;
            }
        }
    }
    else
        std::cout << "You have 0 contact. Choose ADD first or EXIT" << std::endl;
}

int PhoneBook::print_all_contacts()
{
    int amount = 0;

    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First name" << "|";
    std::cout << std::setw(10) << "Last name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    for (int i = -1; i < Contact::get_index_contact(); i++)
    {
        if (!(contacts[i + 1].get_first_name()).empty())
        {
            std::cout << std::setw(10) << i + 2 << "|";
            std::cout << std::setw(10) << truncated(contacts[i + 1].get_first_name()) << "|";
            std::cout << std::setw(10) << truncated(contacts[i + 1].get_last_name()) << "|";
            std::cout << std::setw(10) << truncated(contacts[i + 1].get_nickname()) << "|";
            std::cout << std::endl;
            amount++;
        }
    }
    return amount;
}

std::string PhoneBook::truncated(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}
