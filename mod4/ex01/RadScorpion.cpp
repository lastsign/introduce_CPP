#include "RadScorpion.hpp"

RadScorpion::~RadScorpion()
{
}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
	if (_hp < 0)
		std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) : Enemy(copy) {
	*this = copy;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &assign)
{
	_hp = assign._hp;
	_type = assign._type;
	return *this;
}
