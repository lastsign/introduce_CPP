#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>


class ClapTrap
{
protected:
	int _hitP;
	int _maxHitP;
	int _energyP;
	int _maxEnergyP;
	int _level;
	std::string _name;
	int _meleeAttackDam;
	int _rangedAttackDam;
	int _armorDamRed;
	ClapTrap();
public:
	ClapTrap(int hitP, int maxHitP, int energyP, int maxEnergyP, int level,
			 const std::string &name, int meleeAttackDam, int rangedAttackDam,
			 int armorDamRed);
	virtual ~ClapTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void tageDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getMeleeAttackDam() const;
	int getRangedAttackDam() const;
	const std::string &getName() const;
	int getHitP() const;
};

#endif
