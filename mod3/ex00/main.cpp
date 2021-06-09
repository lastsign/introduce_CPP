#include "FragTrap.hpp"

int main()
{
	std::string enemy = "Enemy Claptrap";
	FragTrap *FR4G_TP = new FragTrap("Трепло");
	FragTrap *FR4G_TP1 = new FragTrap(*FR4G_TP);
	FragTrap *FR4G_TP2 = FR4G_TP;

	std::cout << FR4G_TP1->getName() << std::endl;
	std::cout << FR4G_TP2->getName() << std::endl;
		FR4G_TP->rangedAttack(enemy);
	FR4G_TP->meleeAttack(enemy);

	while (FR4G_TP->getHitP())
	{
		FR4G_TP->tageDamage(20);
		std::cout << FR4G_TP->getHitP() << std::endl;
	}
	FR4G_TP->beRepaired(100);
	std::cout << FR4G_TP->getHitP() << std::endl;
	for (int i = 0; i < 3; ++i)
		FR4G_TP->vaulthunter_dor_exe(enemy);
	delete FR4G_TP;
	delete FR4G_TP1;
	return 0;
}