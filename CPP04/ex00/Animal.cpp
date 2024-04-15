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