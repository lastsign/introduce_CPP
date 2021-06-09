/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:24:00 by ptycho            #+#    #+#             */
/*   Updated: 2021/05/18 20:24:00 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "../ex03/ClapTrap.hpp"


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

ClapTrap::ClapTrap(): _hitP(),
					  _maxHitP(),
					  _energyP(),
					  _maxEnergyP(),
					  _level(),
					  _name(),
					  _meleeAttackDam(),
					  _rangedAttackDam(),
					  _armorDamRed()
{
	std::cout << "default CL4P-TP created" << std::endl;
}

