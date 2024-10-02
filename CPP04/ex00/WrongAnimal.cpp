#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( void ): type("Null")
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ): type(type)
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cp)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = cp;
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