#ifndef Fixed_HPP
# define Fixed_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int i;
		static const int j = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
		Fixed(const Fixed &cp);
		Fixed& operator=(const Fixed &other);

		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& stout, const Fixed& Fixed);

#endif