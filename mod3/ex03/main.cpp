#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap FR4G_TP = FragTrap("Трепло");
	ScavTrap SC4V_TP = ScavTrap("Yura Terminator");
	NinjaTrap NINJ4_TP = NinjaTrap("Ninja Assassin");
	NinjaTrap NINJ4_TP1 = NinjaTrap("David Eddings");
	ClapTrap CL4P_TP = ClapTrap(100, 100, 100, 100, 1, "CLAPPP", 30, 30, 11);
	std::cout << std::endl;
	//	std::string enemy = "Enemy Claptrap";
//	FR4G_TP.rangedAttack(enemy);
//	FR4G_TP.meleeAttack(enemy);
//
//	SC4V_TP.rangedAttack(enemy);
//	SC4V_TP.meleeAttack(enemy);
//	while (FR4G_TP.getHitP())
//	{
//		FR4G_TP.tageDamage(100);
//		std::cout << FR4G_TP.getHitP() << std::endl;
//	}
//	while (SC4V_TP.getHitP())
//	{
//		SC4V_TP.tageDamage(100);
//		std::cout << SC4V_TP.getHitP() << std::endl;
//	}
//
//	FR4G_TP.beRepaired(100);
//	std::cout << FR4G_TP.getHitP() << std::endl;
//	FR4G_TP.vaulthunter_dor_exe(enemy);
//
//	SC4V_TP.beRepaired(100);
//	std::cout << SC4V_TP.getHitP() << std::endl;
//	SC4V_TP.challengeNewcomer();

	NINJ4_TP.ninjaShoebox(CL4P_TP);
	NINJ4_TP.ninjaShoebox(FR4G_TP);
	NINJ4_TP.ninjaShoebox(SC4V_TP);
	NINJ4_TP.ninjaShoebox(NINJ4_TP);
	NINJ4_TP.ninjaShoebox(NINJ4_TP1);
	std::cout << std::endl;
	return 0;
}