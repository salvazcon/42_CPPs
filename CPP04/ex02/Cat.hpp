#ifndef  CAT_HPP
# define  CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    protected:

    private:
        Brain*	brain;
        
    public:
        ~Cat(void);
        Cat(void);
	    Cat(const Cat &cp);
        Cat& operator=(const Cat &other);
        virtual void makeSound( void ) const;
        void addIdea(std::string idea) const;
        std::string getIdea(int i) const;
        virtual Brain* getBrain() const;
};

#endif
