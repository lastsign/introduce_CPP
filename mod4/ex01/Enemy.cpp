#include "Enemy.hpp"

int Enemy::getHp() const
{
	return _hp;
}

Enemy::Enemy(int hp, const std::string &type) : _hp(hp), _type(type)
{

}

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

Enemy &Enemy::operator=(const Enemy &assign)
{
	_hp = assign._hp;
	_type = assign._type;
	return *this;
}

Enemy::~Enemy()
{

}

void Enemy::takeDamage(int damage)
{
	if (damage >= 0)
	{
		_hp -= damage;
	}
}

Enemy::Enemy()
{

}

const std::string &Enemy::getType() const
{
	return _type;
}
