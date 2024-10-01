#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(): ClapTrap("", 100, 100, 30) 
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	this->name = other.name;
	this->hp = other.hp;
	this->ps = other.ps;
	this->power = other.power;
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::FragTrap(const FragTrap &cp): ClapTrap(cp)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = cp;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " activates his special skill, CELEBRATION MODE displayed a positive high fives request !!" << std::endl;
}
