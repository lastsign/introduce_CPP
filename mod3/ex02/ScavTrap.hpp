#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(const std::string &name);
	ScavTrap();
	ScavTrap(const ScavTrap &scavTrap);
	ScavTrap &operator=(const ScavTrap &scavTrap);
	virtual ~ScavTrap();
	void challengeNewcomer();
};

#endif
