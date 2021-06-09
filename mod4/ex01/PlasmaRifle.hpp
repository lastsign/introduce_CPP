#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"
# include <iostream>

class PlasmaRifle : public AWeapon
{
private:
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &copy);
	PlasmaRifle &operator=(const PlasmaRifle &assign);
	void attack() const;
};

#endif
