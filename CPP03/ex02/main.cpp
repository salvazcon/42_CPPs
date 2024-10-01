#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap p1("Player 1");
    ScavTrap p2("Player 2");
	FragTrap p3("Player 3");
	
	std::cout << std::endl;
	std::cout << "Player 1 have " << p1.getPs() << " pt of energy and " << p1.getHp() << " pt of health!" << std::endl;
    std::cout << "Player 2 have " << p2.getPs() << " pt of energy and " << p2.getHp() << " pt of health!" << std::endl;
	std::cout << "Player 3 have " << p3.getPs() << " pt of energy and " << p3.getHp() << " pt of health!" << std::endl;
	std::cout << std::endl;

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