#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(const std::string &name);
	virtual ~FragTrap();
	FragTrap();
	FragTrap(const FragTrap &fragTrap);
	FragTrap &operator=(const FragTrap &fragTrap);
	void vaulthunter_dor_exe(std::string const &target);
};

#endif
