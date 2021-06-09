#include "Character.hpp"

const std::string &Character::getName() const
{
	return _name;
}

Character::Character(std::string const &name)
{
	_name = name;
	for (int i = 0; i < 4; ++i)
		_mate[i] = nullptr;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character &Character::operator=(const Character &assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < 4; ++i)
			delete _mate[i];
		for (int i = 0; i < 4; ++i)
			_mate[i] = assign._mate[i]->clone();
	}
	return *this;
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while (_mate[i])
		i++;
	if (i >= 0 && i <= 3)
		_mate[i] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		_mate[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3)
		_mate[idx]->use(target);
}

Character::Character()
{
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete _mate[i];
}
