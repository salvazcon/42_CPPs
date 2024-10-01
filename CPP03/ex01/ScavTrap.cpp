#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(): ClapTrap("", 100, 50, 20) 
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.name;
	this->hp = other.hp;
	this->ps = other.ps;
	this->power = other.power;
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &cp): ClapTrap(cp)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = cp;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->hp > 0)
    {
        if(this->ps-- > 0)
            std::cout << "ScravTrap " << this->name << " attacks " << target << ", causing " << this->power << " points of damage!" << std::endl;
        else
            std::cout << "ScravTrap " << this->name << " have no energy left" << std::endl;
    }
    else
        std::cout << "ScravTrap " << this->name << " is already is dead" << std::endl;
        
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " activates his special skill, is now in GATE KEEPER MODE !!" << std::endl;
}
