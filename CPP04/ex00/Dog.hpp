#ifndef  DOG_HPP
# define  DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog: public Animal
{
    protected:
    private:
    public:
        Dog(void);
        ~Dog(void);
        virtual void makeSound( void ) const;
};

#endif
