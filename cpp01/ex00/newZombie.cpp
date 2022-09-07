#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *zom;

    zom = new Zombie(name);
    zom->setname(name);
    return (zom);
}