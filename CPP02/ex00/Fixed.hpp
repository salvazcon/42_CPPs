#ifndef Fixed_HPP
# define Fixed_HPP

# include <iostream>

class Fixed
{
	private:
		int i;
		static const int j = 8;

	public:
		~Fixed();
		Fixed();
		Fixed( const Fixed &cp );
		Fixed& operator=( const Fixed &cp );
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
};

#endif