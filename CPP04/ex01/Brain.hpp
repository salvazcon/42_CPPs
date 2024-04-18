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
        virtual ~Brain();
        Brain( void );
        Brain(const Brain &cp);
		Brain& operator=(const Brain &other);
        int getSize(void) const;
        std::string getIdea(int i) const;
        void addIdea(std::string idea);
};
#endif
