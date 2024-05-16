#include "Dog.hpp"

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    return ;
}

Dog::Dog( void )
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog Constructor called" << std::endl;
    return ;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other.type;
    this->_brain = other._brain;
	return *this;
}

Dog::Dog(const Dog &cp): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
    *this = cp;
    return;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}

void Dog::addIdea(std::string idea) const
{
	this->_brain->addIdea(idea);
}

std::string Dog::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}
