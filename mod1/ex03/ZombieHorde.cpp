#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	count_z = n;
	z = new Zombie[n];
}

void ZombieHorde::announce()
{
	for (int i = 0; i < count_z; i++)
		z[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	delete[] z;
}
