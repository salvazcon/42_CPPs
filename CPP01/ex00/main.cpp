#include "Zombie.hpp"

int main(void)
{
	randomChump("z1");
	
	Zombie* z2 = newZombie("z2");
	z2->announce();
	delete z2;
}