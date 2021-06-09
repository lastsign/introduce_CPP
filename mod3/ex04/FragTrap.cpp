#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
	std::cout << "FR4G-TP created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP destroyed" << std::endl;
}

void FragTrap::vaulthunter_dor_exe(const std::string &target)
{
	_energyP -= 25;
	if (_energyP >= 0)
	{
		const std::string lmfaoattack[5] = {
				" Pirate Ship Mode ", " Gun Wizard ",
				" One-Shot Wonder ", " Laser Inferno ",
				" Clap-in-the-Box "
		};
		int in = rand() % 5;
		std::cout << "FR4G-TP " << getName() << lmfaoattack[in] << target
				  << " at range, causing " << in * 11 << " points of damage!"
				  << std::endl;
	}
	else
		std::cout << "Out off mana, my servos... are seizing..." << std::endl;
	if (_energyP < 0)
		_energyP = 0;
}

FragTrap::FragTrap()
{
	_hitP = 100;
	_maxHitP = 100;
	_rangedAttackDam = 15;
	_armorDamRed = 3;
	std::cout << "default FR4G-TP created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap) {
	*this = fragTrap;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	_hitP = fragTrap._hitP;
	_maxHitP = fragTrap._maxHitP;
	_energyP = fragTrap._energyP;
	_maxEnergyP = fragTrap._maxEnergyP;
	_level = fragTrap._level;
	_name = fragTrap._name;
	_meleeAttackDam = fragTrap._meleeAttackDam;
	_rangedAttackDam = fragTrap._rangedAttackDam;
	_armorDamRed = fragTrap._armorDamRed;
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}