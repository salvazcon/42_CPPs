#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap( void )
{
    this->name = "";
	this->hp = 100;
	this->ps = 100;
	this->power = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)/* : ClapTrap(name) */
{
    this->name = name;
    this->hp = 100;
    this->ps = 50;
    this->power = 20;
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
	return;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " activates his special skill, CELEBRATION MODE displayed a positive high fives request !!" << std::endl;
}
