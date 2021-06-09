#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"


class PowerFist : public AWeapon
{
private:
public:
	PowerFist();
	PowerFist(const PowerFist &copy);
	PowerFist &operator=(const PowerFist &assign);
	void attack() const;
};

#endif
