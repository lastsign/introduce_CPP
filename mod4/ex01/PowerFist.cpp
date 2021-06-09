#include "PowerFist.hpp"

PowerFist::PowerFist() :AWeapon("Power Fist", 8, 50)
{

}

PowerFist &PowerFist::operator=(const PowerFist &assign)
{
	_name = assign._name;
	_aPCost = assign._aPCost;
	_damage = assign._damage;
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::PowerFist(const PowerFist &copy)
{
	*this = copy;
}
