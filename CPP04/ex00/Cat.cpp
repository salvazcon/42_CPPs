#include "Cat.hpp"

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    return ;
}

Cat::Cat( void )
{
    this->type = "Cat";
    std::cout << "Cat Constructor called" << std::endl;
    return ;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}