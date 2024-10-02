#include "Dog.hpp"

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Dog::Dog(const Dog &cp): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
    *this = cp;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}