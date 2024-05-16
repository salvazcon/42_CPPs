#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal( void ): type("Null")
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
    return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cp): type(cp.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
    return;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal default sound" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}