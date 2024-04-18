#include "Animal.hpp"

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
    return ;
}

Animal::Animal( void ): type("Null")
{
    std::cout << "Animal Constructor called" << std::endl;
    return ;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Animal::Animal(const Animal &cp)
{
    std::cout << "Animal copy constructor called" << std::endl;
	*this = cp;
    return;
}

void Animal::makeSound(void) const
{
    std::cout << "Default Sound" << std::endl;
}

void Animal::setType(std::string type)
{
	this->type = type;
}

std::string Animal::getType(void) const
{
	return this->type;
}