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
		~Fixed();
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &cp);
		Fixed& operator=(const Fixed &other);
		int toInt( void ) const;
		float toFloat( void ) const;
		int getRawBits( void ) const;
		void setRawBits ( int const raw );

		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;

		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		static const Fixed& min(const Fixed& f1, const Fixed& f2);
		static const Fixed& min(Fixed& f1, Fixed& f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);
		static const Fixed& max(Fixed& f1, Fixed& f2);

};

std::ostream& operator<<(std::ostream& stout, const Fixed& Fixed);

#endif