#ifndef  PMERGEME_HPP
# define  PMERGEME_HPP

#include <iostream>
#include <string>

class PmergeMe
{
    protected:

    private:
    
    public:
        ~PmergeMe(void);
        PmergeMe(void);
        PmergeMe(const PmergeMe &cp);
		PmergeMe& operator=(const PmergeMe &other);
};

#endif
