#include "WrongCat.hpp"

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

WrongCat::WrongCat(const WrongCat &cp): WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = cp;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat default sound" << std::endl;
}

