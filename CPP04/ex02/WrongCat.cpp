#include "WrongCat.hpp"

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
    return ;
}

WrongCat::WrongCat( void )
{
    this->type = "WrongCat";
    std::cout << "WrongCat Constructor called" << std::endl;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

WrongCat::WrongCat(const WrongCat &cp): WrongAnimal()
{
	this->type = cp.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat default sound" << std::endl;
}

