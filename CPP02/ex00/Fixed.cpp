#include "Fixed.hpp"

Fixed::~Fixed()
{ 
	std::cout << "Destructor called" << std::endl; 
}

Fixed::Fixed(): i(0)
{ 
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cp)
{
	std::cout << "Copy constructor called" << std::endl;
	this->i = cp.i;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->i);
}

void Fixed::setRawBits (int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->i = raw;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->i = other.getRawBits();
	return *this;
}