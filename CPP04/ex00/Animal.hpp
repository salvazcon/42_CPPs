#ifndef  ANIMAL_HPP
# define  ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;

    private:
    
    public:
        Animal(void);
        ~Animal(void);
        virtual void makeSound( void ) const;
        void setType(std::string type);
        std::string getType(void) const;
};

#endif
