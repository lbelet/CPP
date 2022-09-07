#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>
# include <iomanip>

class Zombie
{
private:
    
    std::string _name;

public:

    Zombie(std::string name);
    ~Zombie();

    void announce(void);
    std::string getname();
    void setname(std::string);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif