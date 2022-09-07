# include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie *zom;

    zom = newZombie(name);
    zom->announce();
    delete zom;
}