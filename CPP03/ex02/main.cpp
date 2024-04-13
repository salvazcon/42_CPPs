#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap p1("Player 1");
    ScavTrap p2("Player 2");
	FragTrap p3("Player 3");
	
    p2.attack("Player 1");
	p1.attack("Player 2");
	p2.takeDamage(p1.getPower());
	p3.attack("Player 2");
	p2.takeDamage(p3.getPower());
	p2.guardGate();
	p1.attack("Player 3");
	p3.takeDamage(p1.getPower());
	p2.beRepaired(5);
	p3.beRepaired(5);
	p3.highFivesGuys();
	std::cout << std::endl;
	return (0);
}