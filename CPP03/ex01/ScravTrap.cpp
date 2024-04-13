#include "ClapTrap.hpp"

ClapTrap::~ScravTrap()
{
	std::cout << "Destructor called" << std::endl;
    return ;
}

ClapTrap::ScravTrap(std::string name, int hp, int ps, int power)
{
    std::cout << "Constructor called" << std::endl;
    this->name = name;
    this->hp = hp;
    this->ps = ps;
    this->power = power;
    return ;
}