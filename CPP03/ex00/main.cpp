#include "ClapTrap.hpp"

int main()
{
    ClapTrap p1("Player 1");
    ClapTrap p2("Player 2");

    p1.attack(p2.getName());
    p2.takeDamage(p1.getPower());
    p2.beRepaired(1);
    p1.attack(p2.getName());
    p2.takeDamage(p1.getPower());
    p1.attack(p2.getName());
    std::cout << "CRITICAL ATTACK !!!, FINISH HERE!!!" << std::endl;
    p2.takeDamage(100);
    p2.beRepaired(1);
    p2.attack(p1.getName());
    return (0);
}