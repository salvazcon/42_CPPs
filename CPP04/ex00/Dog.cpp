#include "Dog.hpp"

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    return ;
}

Dog::Dog( void )
{
    this->type = "Dog";
    std::cout << "Dog Constructor called" << std::endl;
    return ;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Dog::Dog(const Dog &cp): Animal()
{
	this->type = cp.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}