#include "Data.hpp"

Data::~Data( void )
{
    std::cout << "Data Destructor called" << std::endl;
}

Data::Data( void ): n(0)
{
    std::cout << "Data Constructor called" << std::endl;
}

Data::Data( int num ): n(num)
{
    std::cout << "Data Constructor called" << std::endl;
}

Data& Data::operator=(const Data &other)
{
	std::cout << "Data copy assignment operator called" << std::endl;
    this->n = other.n;
	return *this;
}

Data::Data(const Data &cp)
{
	std::cout << "Data copy constructor called" << std::endl;
	*this = cp;
}

int Data::getN()
{
    return(this->n);
}

void Data::setN(int num)
{
    this->n = num;
}

