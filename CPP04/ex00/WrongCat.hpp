#ifndef  WRONGCAT_HPP
# define  WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    protected:
    private:
    public:
        WrongCat(void);
        ~WrongCat(void);
        virtual void makeSound( void ) const;
};

#endif
