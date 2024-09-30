# include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	int i = -1;

	Zombie *zombie = new Zombie[n];
	while (++i < n)
		zombie[i].setName(name);
	return zombie;
}