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
	    Cat(const Cat &cp);
        Cat& operator=(const Cat &other);
        virtual void makeSound( void ) const;
};

#endif
