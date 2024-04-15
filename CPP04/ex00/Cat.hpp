#ifndef  CAT_HPP
# define  CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat: public Animal
{
    protected:
    private:
    public:
        Cat(void);
        ~Cat(void);
        virtual void makeSound( void ) const;
};

#endif
