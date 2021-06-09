#include "AWeapon.hpp"

AWeapon::AWeapon()
{

}

AWeapon::AWeapon(const AWeapon &copy)
{
	*this = copy;
}

AWeapon &AWeapon::operator=(const AWeapon &assign)
{
	_name = assign._name;
	_aPCost = assign._aPCost;
	_damage = assign._damage;
	return *this;
}

AWeapon::~AWeapon()
{

}

std::string AWeapon::getName() const
{
	return _name;
}

int AWeapon::getAPCost() const
{
	return _aPCost;
}

int AWeapon::getDamage() const
{
	return _damage;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name), _aPCost(apcost), _damage(damage)
{

}
