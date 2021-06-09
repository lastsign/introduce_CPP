#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

void HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string &name) : name(name)
{}

void HumanB::setWeapon(Weapon &weapon)
{
	HumanB::weapon = &weapon;
}

