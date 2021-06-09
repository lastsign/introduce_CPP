#include "Character.hpp"

Character::Character()
{}

Character::Character(const std::string &name) : _name(name), _ap(40), _weapon(nullptr)
{

}

Character::Character(const Character &copy)
{
	*this = copy;
}


std::ostream &operator<<(std::ostream &os, const Character &character)
{
	if (character.getWeapon())
	{
		os << character.getName() << " has " << character.getAp()
		   << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	}
	else
	{
		os << character.getName() << " has " << character.getAp()
		   << " AP and is unarmed" << std::endl;
	}
	return os;
}


Character &Character::operator=(const Character &assign)
{
	if (_weapon)
		delete _weapon;
	_name = assign._name;
	_ap = assign._ap;
	_weapon = assign._weapon;
	return *this;
}

Character::~Character()
{

}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (_weapon)
	{
		if (_ap - _weapon->getAPCost())
		{
			std::cout << _name << " attacks " << enemy->getType() << " with a "
					  << _weapon->getName() << std::endl;
			_weapon->attack();
			enemy->takeDamage(_weapon->getDamage());
			_ap -= _weapon->getAPCost();
		}
	}
}

std::string Character::getName() const
{
	return _name;
}

int Character::getAp() const
{
	return _ap;
}

AWeapon *Character::getWeapon() const
{
	return _weapon;
}
