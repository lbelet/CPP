#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << name << " is 'alive'" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is really dead now" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

void Zombie::setname(std::string name)
{
    this->_name = name;
}

std::string Zombie::getname()
{
    return (this->_name);
}