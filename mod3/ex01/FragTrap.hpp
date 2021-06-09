#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>

class FragTrap
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
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &fragTrap);
	FragTrap &operator=(const FragTrap &fragTrap);
	virtual ~FragTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void tageDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dor_exe(std::string const &target);
	int getHitP() const;
	int getMeleeAttackDam();
	int getRangedAttackDam();
	int getLevel() const;
	int getMaxEnergyP() const;
	const std::string &getName() const;
};

#endif
