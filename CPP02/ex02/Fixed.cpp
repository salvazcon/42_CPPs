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

Fixed Fixed::operator+(const Fixed &other) const
{
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (this->toFloat() / other.toFloat());
}

bool	Fixed::operator>(const Fixed &other) const
{
	if (this->toFloat() > other.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed &other) const
{
	if (this->toFloat() < other.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed &other) const
{
	if (this->toFloat() <= other.toFloat())
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed &other) const
{
	if (this->toFloat() >= other.toFloat())
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed &other) const
{
	if (this->toFloat() == other.toFloat())
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed &other) const
{
	if (this->toFloat() != other.toFloat())
		return true;
	return false;
}

Fixed& Fixed::operator++(void)
{
	++this->i;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed cp(*this);
	++this->i;
	return cp;
}

Fixed& Fixed::operator--(void)
{
	--this->i;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed cp(*this);
	--this->i;
	return cp;
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 > f2)
		return (f2);
	return (f1);
}
const Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return (f2);
	return (f1);
}
const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}
const Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}