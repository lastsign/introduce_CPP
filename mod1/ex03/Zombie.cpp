#include "Zombie.hpp"

Zombie::Zombie()
{
	int i = std::rand() % 4;
	name = zombieNames[i];
	type = zombieTypes[i];
}

Zombie::~Zombie()
{
	std::cout << "< " << name << "(" << type << ")> died twice, looks sad" << std::endl;
}

void Zombie::announce()
{
	std::cout << "< " << name << "(" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}


