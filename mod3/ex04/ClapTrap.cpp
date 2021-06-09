#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP, good as new, I think. Am I leaking?" << std::endl;
}

void ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4GorSC4V-TP " << getName() <<  " attacks " << target << " at range, causing " << getRangedAttackDam() << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4GorSC4V-TP " << getName() <<  " attacks " << target << " at melee, causing " << getMeleeAttackDam() << " points of damage!" << std::endl;
}

void ClapTrap::tageDamage(unsigned int amount)
{
	_hitP -= static_cast<int>(amount - _armorDamRed);
	if (_hitP < 0)
		_hitP = 0;
	std::cout << "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitP += static_cast<int>(amount);
	if (_hitP > _maxHitP)
		_hitP = _maxHitP;
	std::cout << "Hey! Over here! I'm over heere!" << std::endl;
}

int ClapTrap::getHitP() const
{
	return _hitP;
}

int ClapTrap::getMeleeAttackDam() const
{
	return _meleeAttackDam;
}

int ClapTrap::getRangedAttackDam() const
{
	return _rangedAttackDam;
}

const std::string &ClapTrap::getName() const
{
	return _name;
}

ClapTrap::ClapTrap(int hitP, int maxHitP, int energyP, int maxEnergyP,
				   int level, const std::string &name, int meleeAttackDam,
				   int rangedAttackDam, int armorDamRed) : _hitP(hitP),
														   _maxHitP(maxHitP),
														   _energyP(energyP),
														   _maxEnergyP(
																   maxEnergyP),
														   _level(level),
														   _name(name),
														   _meleeAttackDam(
																   meleeAttackDam),
														   _rangedAttackDam(
																   rangedAttackDam),
														   _armorDamRed(
																   armorDamRed)
{
	std::cout << "CL4P-TP, hey, check me out everybody! I'm dancin', I'm dancin'!" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "default CL4P-TP created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) : _hitP(clapTrap._hitP),
												_maxHitP(clapTrap._maxHitP),
												_energyP(clapTrap._energyP),
												_maxEnergyP(clapTrap._maxEnergyP),
												_level(clapTrap._level),
												_meleeAttackDam(clapTrap._meleeAttackDam),
												_rangedAttackDam(clapTrap._rangedAttackDam),
												_armorDamRed(clapTrap._armorDamRed)
{
	*this = clapTrap;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
	_hitP = clapTrap._hitP;
	_maxHitP = clapTrap._maxHitP;
	_energyP = clapTrap._energyP;
	_maxEnergyP = clapTrap._maxEnergyP;
	_level = clapTrap._level;
	_name = clapTrap._name;
	_meleeAttackDam = clapTrap._meleeAttackDam;
	_rangedAttackDam = clapTrap._rangedAttackDam;
	_armorDamRed = clapTrap._armorDamRed;
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

int ClapTrap::getMaxHitP() const
{
	return _maxHitP;
}

int ClapTrap::getEnergyP() const
{
	return _energyP;
}

int ClapTrap::getMaxEnergyP() const
{
	return _maxEnergyP;
}

int ClapTrap::getLevel() const
{
	return _level;
}

int ClapTrap::getArmorDamRed() const
{
	return _armorDamRed;
}
