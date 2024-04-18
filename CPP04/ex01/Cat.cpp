#include "Cat.hpp"

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    return ;
}

Cat::Cat( void )
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat Constructor called" << std::endl;
    return ;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other.type;
    this->_brain = other._brain;
	return *this;
}

Cat::Cat(const Cat &cp): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cp;
    return;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}

void Cat::addIdea(std::string idea) const
{
	this->_brain->addIdea(idea);
}

std::string Cat::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}
