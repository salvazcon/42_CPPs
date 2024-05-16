#include "Cat.hpp"

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    return ;
}

Cat::Cat( void )
{
    std::cout << "Cat Constructor called" << std::endl;
    this->type = "Cat";
    return ;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Cat::Cat(const Cat &cp): Animal()
{
	this->type = cp.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}