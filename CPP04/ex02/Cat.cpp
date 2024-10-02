#include "Cat.hpp"

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat( void ): Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "Cat Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other.type;
    this->brain = new Brain(*other.brain);
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

void Cat::addIdea(std::string idea) const
{
	this->brain->addIdea(idea);
}

std::string Cat::getIdea(int i) const
{
	return this->brain->getIdea(i);
}

Brain* Cat::getBrain() const 
{
	return brain;
}
