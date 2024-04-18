#ifndef  CAT_HPP
# define  CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    protected:
    private:
        Brain*	_brain;
    public:
        virtual  ~Cat(void);
        Cat(void);
	    Cat(const Cat &cp);
        Cat& operator=(const Cat &other);
        virtual void makeSound( void ) const;
        void addIdea(std::string idea) const;
        std::string getIdea(int i) const;
};

#endif
