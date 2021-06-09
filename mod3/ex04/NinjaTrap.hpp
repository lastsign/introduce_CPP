#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(const std::string &name);
	NinjaTrap(const NinjaTrap &NinjaTrap);
	NinjaTrap &operator=(const NinjaTrap &ninjaTrap);
	virtual ~NinjaTrap();
	void ninjaShoebox(const ClapTrap &clapTrap);
	void ninjaShoebox(const ScavTrap &scavTrap);
	void ninjaShoebox(const FragTrap &fragTrap);
	void ninjaShoebox(const NinjaTrap &ninjaTrap);
};

#endif
