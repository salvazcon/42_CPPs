#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap( void )
{
    this->name = "";
	this->hp = 10;
	this->ps = 10;
	this->power = 0;
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
	this->hp = 10;
	this->ps = 10;
	this->power = 0;
    std::cout << "Constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->hp > 0)
    {
        if(this->ps-- > 0)
            std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->power << " points of damage!" << std::endl;
        else
            std::cout << "ClapTrap " << this->name << " have no energy left" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is already is dead" << std::endl;
        
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hp > 0)
    {
        std::cout << "ClapTrap " << this->name << " receives " << amount << " points of damage!" << std::endl;
        this->hp = this->hp - amount;
        if(this->hp <= 0)
            std::cout << "ClapTrap " << this->name << " has exploted, GAME OVER " << this->name << "!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->hp > 0)
    {
        if(this->ps-- > 0)
            std::cout << "ClapTrap " << this->name << " is being repaired, get " << amount << " hp points!" << std::endl;
        else
            std::cout << "ClapTrap " << this->name << " have no energy left" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is already is dead!" << std::endl;
}

std::string ClapTrap::getName(void)
{
    return(this->name);
}

int ClapTrap::getPower(void)
{
    return(this->power);
}

int ClapTrap::getPs(void)
{
    return(this->ps);
}

int ClapTrap::getHp(void)
{
    return(this->hp);
}
