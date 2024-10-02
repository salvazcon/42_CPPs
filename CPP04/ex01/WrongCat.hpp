#ifndef  WRONGCAT_HPP
# define  WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    protected:
    private:
    public:
        ~WrongCat(void);
        WrongCat(void);
        WrongCat(const WrongCat &cp);
        WrongCat& operator=(const WrongCat &other);
        virtual void makeSound( void ) const;
};

#endif
