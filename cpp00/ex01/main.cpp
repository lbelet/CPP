#include "PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook;
    std::string str;

    while (42)
    {
        std::cout << "Enter a command: ";
        getline(std::cin, str);
        if (str == "ADD")
            PhoneBook.add();
        if (str == "SEARCH")
            PhoneBook.search();
        if (str == "EXIT")
            break;        
    }
    return 0;
}