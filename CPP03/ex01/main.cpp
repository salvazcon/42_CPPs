#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap p1("Player 1");
    ScavTrap p2("Player 2");
	
    p2.attack("Player 1");
	p1.attack("Player 2");
	p2.guardGate();
	p1.beRepaired(4);
	p2.beRepaired(4);
	p2.takeDamage(5);
	p2.beRepaired(4);
	std::cout << std::endl;
	return (0);
}