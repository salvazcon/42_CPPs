#include "Dog.hpp"

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog( void ): Animal("Dog")
{
    this->brain = new Brain();
    std::cout << "Dog Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other.type;
    this->brain = new Brain(*other.brain);
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

void Dog::addIdea(std::string idea) const
{
	this->brain->addIdea(idea);
}

std::string Dog::getIdea(int i) const
{
	return this->brain->getIdea(i);
}

Brain* Dog::getBrain() const 
{
	return brain;
}
