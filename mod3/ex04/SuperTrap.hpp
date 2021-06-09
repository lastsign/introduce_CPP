#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"


class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap();
	SuperTrap(const SuperTrap &superTrap);
	SuperTrap &operator=(const SuperTrap &superTrap);
	SuperTrap(const std::string &name);

	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
};

#endif
