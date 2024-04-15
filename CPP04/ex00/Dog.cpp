#include "Dog.hpp"

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    return ;
}

Dog::Dog( void )
{
    this->type = "Dog";
    std::cout << "Dog Constructor called" << std::endl;
    return ;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}