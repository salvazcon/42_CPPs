#include "Cat.hpp"

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Cat::Cat(const Cat &cp): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cp;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}