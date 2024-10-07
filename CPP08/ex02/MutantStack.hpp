#ifndef  MUTANTSTACK_HPP
# define  MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    protected:

    private:

    public:

        typedef typename std::deque<T>::iterator iterator;
    
        ~MutantStack(void){};
        
        MutantStack(void): std::stack<T>(){};

        MutantStack(const MutantStack &cp)
        { 
            *this = cp;
        };
	
    	MutantStack& operator=(const MutantStack &other)
        {
            std::stack<T>::operator=(other);
            return *this;
        };

        iterator begin() 
        {
            return (std::stack<T>::c.begin());
        }

        iterator end() 
        {
            return (std::stack<T>::c.end());;
        }
};

#endif
