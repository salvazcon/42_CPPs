#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
	this->hp = 10;
	this->ps = 10;
	this->power = 0;
    std::cout << "Constructor called" << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->hp = other.hp;
	this->ps = other.ps;
	this->power = other.power;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &cp) : name(cp.name), hp(cp.hp), ps(cp.ps), power(cp.power)
{
	std::cout << "Copy constructor called" << std::endl;
    return;
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
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
        
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
