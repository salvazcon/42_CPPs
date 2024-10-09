#include "PmergeMe.hpp"

PmergeMe::~PmergeMe()
{
    std::cout << "PmergeMe destructor called" << std::endl;
}

PmergeMe::PmergeMe( void )
{
    std::cout << "PmergeMe constructor called" << std::endl;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &other)
{
    //(<-- Datos a copiar.)
	std::cout << "PmergeMe copy assignment operator called" << std::endl;
	return *this;
}

PmergeMe::PmergeMe(const PmergeMe &cp)
{
	std::cout << "PmergeMe copy constructor called" << std::endl;
	*this = cp;
}
