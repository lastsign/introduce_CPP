#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType()
{
    int i = rand() % 4;
    type = zombieTypes[i];
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* z = new Zombie(type, name);
    return z;
}

void ZombieEvent::randomChump()
{
    int i = rand() % 4;
    Zombie *z = new Zombie(zombieTypes[i] , zombieNames[i]);
    z->announce();
    delete z;
}