#include "ScavTrap.hpp"

void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << "SC4V-TP " << getName() <<  " attacks " << target << " at range, causing " << getRangedAttackDam() << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "SC4V-TP " << getName() <<  " attacks " << target << " at melee, causing " << getMeleeAttackDam() << " points of damage!" << std::endl;
}

void ScavTrap::tageDamage(unsigned int amount)
{
	_hitP -= static_cast<int>(amount - _armorDamRed);
	if (_hitP < 0)
		_hitP = 0;
	std::cout << "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	_hitP += static_cast<int>(amount);
	if (_hitP > _maxHitP)
		_hitP = _maxHitP;
	std::cout << "Hey! Over here! I'm over heere!" << std::endl;
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

ScavTrap::ScavTrap(const std::string &name) : _hitP(100), _maxHitP(100), _energyP(50), _maxEnergyP(50), _level(1), _name(name), _meleeAttackDam(20), _rangedAttackDam(15), _armorDamRed(3)
{
	std::cout << "Hey, check me out everybody! I'm dancin', I'm dancin'!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Good as new, I think. Am I leaking?" << std::endl;
}

ScavTrap::ScavTrap() : _hitP(100), _maxHitP(100), _energyP(50), _maxEnergyP(50), _level(1), _name("Kepka"), _meleeAttackDam(20), _rangedAttackDam(15), _armorDamRed(3)
{
	std::cout << "Hey, check me out" << std::endl;
}

int ScavTrap::getHitP() const
{
	return _hitP;
}

const std::string &ScavTrap::getName() const
{
	return _name;
}

int ScavTrap::getMeleeAttackDam()
{
	return _meleeAttackDam;
}

int ScavTrap::getRangedAttackDam()
{
	return _rangedAttackDam;
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
