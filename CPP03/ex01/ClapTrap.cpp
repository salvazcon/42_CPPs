#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name, int hp, int ps, int power)
{
    std::cout << "Constructor called" << std::endl;
    this->name = name;
    this->hp = hp;
    this->ps = ps;
    this->power = power;
    return ;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->hp > 0)
    {
        if(this->ps > 0)
        {
            std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->power << " points of damage!" << std::endl;
            this->ps--;
            std::cout << "ClapTrap " << this->name << " have " << this->ps << "pt of energy!" << std::endl;
        }
        else
            std::cout << "ClapTrap " << this->name << " have no energy left" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
        
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
        if(this->ps > 0)
        {
            std::cout << "ClapTrap " << this->name << " is being repaired, get " << amount << " hp points!" << std::endl;
            this->ps--;
            std::cout << "ClapTrap " << this->name << " have " << this->ps << "pt of energy!" << std::endl;
        }
        else
            std::cout << "ClapTrap " << this->name << " have no energy left" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
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
