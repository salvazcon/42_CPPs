#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap( void )
{
    this->name = "";
	this->hp = 100;
	this->ps = 50;
	this->power = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)/* : ClapTrap(name) */
{
    this->name = name;
    this->hp = 100;
    this->ps = 50;
    this->power = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
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
	std::cout << "ScavTrap " << this->name << "activates his special skill, is now in GATE KEEPER MODE !!" << std::endl;
}
