#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	std::string type;
	int count_z;
	Zombie* z;
public:
	ZombieHorde(int n);
	void announce();
	~ZombieHorde();
};

#endif // !ZOMBIE_HORDE_HPP
