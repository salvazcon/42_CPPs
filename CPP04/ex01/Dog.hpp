#ifndef  DOG_HPP
# define  DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    protected:
    private:
        Brain*	_brain;
    public:
        virtual  ~Dog(void);
        Dog(void);
        Dog(const Dog &cp);
        Dog& operator=(const Dog &other);
        virtual void makeSound( void ) const;
        void addIdea(std::string idea) const;
        std::string getIdea(int i) const;
};

#endif
