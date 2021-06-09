#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string type;
public:
	void setZombieType();
	Zombie* newZombie(std::string name);
	void randomChump();
};

#endif // !ZOMBIE_EVENT_HPP
