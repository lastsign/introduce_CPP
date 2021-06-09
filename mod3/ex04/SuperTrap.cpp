#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : NinjaTrap(), FragTrap()
{
	_hitP = FragTrap::getHitP();
	_maxHitP = FragTrap::getMaxHitP();
	_energyP = NinjaTrap::getEnergyP();
	_maxEnergyP = NinjaTrap::getMaxEnergyP();
	_level = 1;
	_name = name;
	_meleeAttackDam = NinjaTrap::getMeleeAttackDam();
	_rangedAttackDam = FragTrap::getRangedAttackDam();
	_armorDamRed = FragTrap::getArmorDamRed();
}


SuperTrap::SuperTrap()
{
	std::cout << "default FR4G-TP created" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &superTrap)
{
	*this = superTrap;
	std::cout << "Copy constructor called" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &superTrap)
{
	_hitP = superTrap._hitP;
	_maxHitP = superTrap._maxHitP;
	_energyP = superTrap._energyP;
	_maxEnergyP = superTrap._maxEnergyP;
	_level = superTrap._level;
	_name = superTrap._name;
	_meleeAttackDam = superTrap._meleeAttackDam;
	_rangedAttackDam = superTrap._rangedAttackDam;
	_armorDamRed = superTrap._armorDamRed;
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}
