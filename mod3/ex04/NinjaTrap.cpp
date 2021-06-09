#include "NinjaTrap.hpp"


NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(60,
																	  60,
																	  120,
																	  120,
																	  1,
																	  name,
																	  60,
																	  5,
																	  0)
{
	std::cout << "NINJ4-TP created" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJ4-TP destroyed" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ClapTrap &clapTrap)
{
	if (this != &clapTrap)
	{
		std::cout << _name << " Beat " <<
		clapTrap.getName() << ", fleshbag! Eat " <<
		clapTrap.getName() << ", fleshbag!" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(const ScavTrap &scavTrap)
{
	std::cout << _name << " Hey! Knock " << scavTrap.getName() << " off!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &fragTrap)
{
	std::cout << _name << "How do YOU like target practice?" << fragTrap.getName() << "?" << fragTrap.getName() << "?!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &ninjaTrap)
{
	if (this != &ninjaTrap)
	{
		std::cout << _name << "Another fleshbag falls to the " << ninjaTrap.getName() << std::endl;
	}
}

NinjaTrap::NinjaTrap()
{
	_energyP = 120;
	_maxEnergyP = 120;
	_meleeAttackDam = 60;
	std::cout << "default NINJ4-TP created" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjaTrap) : ClapTrap(ninjaTrap)
{
	*this = ninjaTrap;
	std::cout << "Copy constructor called" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ninjaTrap)
{
	_hitP = ninjaTrap._hitP;
	_maxHitP = ninjaTrap._maxHitP;
	_energyP = ninjaTrap._energyP;
	_maxEnergyP = ninjaTrap._maxEnergyP;
	_level = ninjaTrap._level;
	_name = ninjaTrap._name;
	_meleeAttackDam = ninjaTrap._meleeAttackDam;
	_rangedAttackDam = ninjaTrap._rangedAttackDam;
	_armorDamRed = ninjaTrap._armorDamRed;
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}
