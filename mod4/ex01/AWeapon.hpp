#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>

class AWeapon
{
protected:
	AWeapon();
	std::string _name;
	int _aPCost;
	int _damage;
public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &copy);
	AWeapon &operator=(const AWeapon &assign);
	virtual ~AWeapon();
	std::string virtual getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
