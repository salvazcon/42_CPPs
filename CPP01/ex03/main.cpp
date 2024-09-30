#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// void	leaks(void)
// {
// 	system("leaks -q violence");
// }

int main()
{
	{
		//atexit(leaks);
		Weapon club = Weapon("crude spiked club.");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("other stuff.");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club.");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club.");
		jim.attack();
	}
	return 0;
}