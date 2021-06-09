#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int _ap;
	AWeapon *_weapon;
	Character();
public:
	Character(std::string const &name);
	Character(const Character &copy);
	Character &operator=(const Character &assign);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	int getAp() const;
	AWeapon *getWeapon() const;
	std::string virtual getName() const;
};

std::ostream &operator<<(std::ostream &os, const Character &character);

#endif
