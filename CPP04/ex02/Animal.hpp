#ifndef  ANIMAL_HPP
# define  ANIMAL_HPP

#include <iostream>
#include <string>

class Brain;

class Animal
{
    protected:
        std::string type;

    private:
    
    public:
        virtual ~Animal();
        Animal();
        Animal(std::string type);
        Animal(const Animal &cp);
        Animal& operator=(const Animal &other);
        void setType(std::string type);
        std::string getType(void) const;
        virtual void makeSound(void) const;
        virtual Brain* getBrain() const = 0;
};

#endif
