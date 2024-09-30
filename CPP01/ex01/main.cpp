#include "Zombie.hpp"

///void leaks() {system("leaks -q horde");}

int main() {
	int n = 5;
	int i = -1;
	Zombie* horde = zombieHorde(n, "Paco");
	
	while (++i < n)
		horde[i].announce();
	delete[] horde;
}