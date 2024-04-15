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

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat default sound" << std::endl;
}

