#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(100, 100, 50, 5, 1, name, 20, 15, 3)
{
	std::cout << "SC4V-TP created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP destroyed" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	_energyP -= 25;
	if (_energyP >= 0)
	{
		const std::string scavreplics[5] = {
				" Davay mochi ikh! ", " Malo vam govna, kotoroye vy zavalili! ",
				" Shcha k barygam, a potom - po babam ", " Dostalo uzhe vso eto ",
				" Chto, zabyl kto te baton v budku zakidyvayet? "
		};
		int in = rand() % 5;
		std::cout << "SC4V-TP " << getName() << " say " << scavreplics[in]
				  << std::endl;
	}
	else
		std::cout << "Out off mana, my servos... are seizing..." << std::endl;
	if (_energyP < 0)
		_energyP = 0;
}

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 5, 1, "Kepka", 20, 15, 3)
{
	std::cout << "default SC4V-TP created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
	*this = scavTrap;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
	_hitP = scavTrap._hitP;
	_maxHitP = scavTrap._maxHitP;
	_energyP = scavTrap._energyP;
	_maxEnergyP = scavTrap._maxEnergyP;
	_level = scavTrap._level;
	_name = scavTrap._name;
	_meleeAttackDam = scavTrap._meleeAttackDam;
	_rangedAttackDam = scavTrap._rangedAttackDam;
	_armorDamRed = scavTrap._armorDamRed;
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}
