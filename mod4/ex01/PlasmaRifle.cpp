#include "PlasmaRifle.hpp"


PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) : AWeapon(copy)
{
	*this = copy;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &assign)
{
	_name = assign._name;
	_aPCost = assign._aPCost;
	_damage = assign._damage;
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
