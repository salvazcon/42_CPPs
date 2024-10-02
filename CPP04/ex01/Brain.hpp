#ifndef  BRAIN_HPP
# define  BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    protected:

    private:
        std::string	ideas[100];
        int len;
        
    public:
        ~Brain();
        Brain( void );
        Brain(const Brain &cp);
		Brain& operator=(const Brain &other);
        void addIdea(std::string idea);
        void printIdeas() const;
        std::string getIdea(int i) const;
        int getSize(void) const;
};
#endif
