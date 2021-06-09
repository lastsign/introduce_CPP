#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent zombieEvent;
	{
		Zombie* armyKFU[7];
		for (size_t i = 0; i < 7; i++)
		{
			zombieEvent.setZombieType();
			armyKFU[i] = zombieEvent.newZombie(zombieNames[rand() % 4]);
			armyKFU[i]->announce();
		}
		for (size_t i = 0; i < 7; i++)
		{
			delete armyKFU[i];
		}
	}
	{
		for (size_t i = 0; i < 7; i++)
		{
			zombieEvent.setZombieType();
			zombieEvent.randomChump();
		}
	}
	{
		Zombie** army09831 = new Zombie*[7];
		for (size_t i = 0; i < 7; i++)
		{
			zombieEvent.setZombieType();
			army09831[i] = zombieEvent.newZombie(zombieNames[rand() % 4]);
			army09831[i]->announce();
		}
		for (size_t i = 0; i < 7; i++)
		{
			delete army09831[i];
		}
		delete[] army09831;
	}
	return 0;
}