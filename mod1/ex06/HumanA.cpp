#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>


void HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}


HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name),
														  weapon(weapon)
{}

void HumanA::setWeapon(Weapon &weapon)
{
	HumanA::weapon = weapon;
}
