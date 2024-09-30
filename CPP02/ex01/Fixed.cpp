#include "Fixed.hpp"

Fixed::~Fixed()
{ 
	std::cout << "Destructor called" << std::endl; 
}

Fixed::Fixed(): i(0)
{ 
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n): i(n << j)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f): i(roundf(f * (1 << j)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->i = other.i;
	return *this;
}

Fixed::Fixed(const Fixed &cp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
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

int		Fixed::toInt(void) const
{
	return (i >> j);
}

float	Fixed::toFloat(void) const
{
	return ((float)i / (1 << j));
}

std::ostream& operator<<(std::ostream& stout, const Fixed& Fixed)
{
	stout << Fixed.toFloat();
	return stout;
}
