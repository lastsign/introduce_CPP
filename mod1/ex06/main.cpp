#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon club = Weapon("crube spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("crube terro club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crube spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("crube terro club");
		jim.attack();
	}
}