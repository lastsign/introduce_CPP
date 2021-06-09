#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string type, std::string name): type(type), name(name)
{
	std::cout << "< " << name << "(" << type << ")> are zombie now" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "< " << name << "(" << type << ")> died twice, looks sad" << std::endl;
}

void Zombie::announce()
{
	std::cout << "< " << name << "(" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}
