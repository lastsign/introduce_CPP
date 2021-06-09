#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>

class ScavTrap
{
private:
	int _hitP;
	int _maxHitP;
	int _energyP;
	int _maxEnergyP;
	int _level;
	std::string _name;
	int _meleeAttackDam;
	int _rangedAttackDam;
	int _armorDamRed;
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &scavTrap);
	ScavTrap &operator=(const ScavTrap &scavTrap);
	virtual ~ScavTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void tageDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
	int getHitP() const;
	int getMeleeAttackDam();
	int getRangedAttackDam();
	const std::string &getName() const;
};

#endif
