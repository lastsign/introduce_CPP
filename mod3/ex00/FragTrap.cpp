#include "FragTrap.hpp"

void FragTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << getName() <<  " attacks " << target << " at range, causing " << getRangedAttackDam() << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << getName() <<  " attacks " << target << " at melee, causing " << getMeleeAttackDam() << " points of damage!" << std::endl;
}

void FragTrap::tageDamage(unsigned int amount)
{
	_hitP -= static_cast<int>(amount - _armorDamRed);
	if (_hitP < 0)
		_hitP = 0;
	std::cout << "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	_hitP += static_cast<int>(amount);
	if (_hitP > _maxHitP)
		_hitP = _maxHitP;
	std::cout << "Hey! Over here! I'm over heere!" << std::endl;
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

FragTrap::FragTrap(const std::string &name) : _hitP(100), _maxHitP(100), _energyP(100), _maxEnergyP(100), _level(1), _name(name), _meleeAttackDam(30), _rangedAttackDam(20), _armorDamRed(5)
{
	std::cout << "Hey, check me out everybody! I'm dancin', I'm dancin'!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Good as new, I think. Am I leaking?" << std::endl;
}

int FragTrap::getHitP() const
{
	return _hitP;
}

const std::string &FragTrap::getName() const
{
	return _name;
}

int FragTrap::getMeleeAttackDam()
{
	return _meleeAttackDam;
}

int FragTrap::getRangedAttackDam()
{
	return _rangedAttackDam;
}

FragTrap::FragTrap() :  _hitP(100), _maxHitP(100), _energyP(100), _maxEnergyP(100), _level(1), _name("Grisha"), _meleeAttackDam(30), _rangedAttackDam(20), _armorDamRed(5)
{
	std::cout << "Hey, check me out" << std::endl;
}

int FragTrap::getLevel() const
{
	return _level;
}

int FragTrap::getMaxEnergyP() const
{
	return _maxEnergyP;
}


FragTrap::FragTrap(const FragTrap &fragTrap)
{
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
