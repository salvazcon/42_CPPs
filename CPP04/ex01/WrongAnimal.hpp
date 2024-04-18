#ifndef  WRONGANIMAL_HPP
# define  WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    private:
    public:
        virtual ~WrongAnimal(void);
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &cp);
        WrongAnimal& operator=(const WrongAnimal &other);
        virtual void makeSound( void ) const;
        void setType(std::string type);
	    std::string getType(void) const;
};

#endif
