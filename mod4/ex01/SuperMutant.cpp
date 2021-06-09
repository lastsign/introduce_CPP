#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(copy)
{
	*this = copy;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	if (damage >= 0)
	{
		_hp -= (damage - 3);
		if (_hp < 0)
			std::cout << "Gaaah. Me want smash heads!" << std::endl;
	}
}

SuperMutant &SuperMutant::operator=(const SuperMutant &assign)
{
	_hp = assign._hp;
	_type = assign._type;
	return *this;
}
