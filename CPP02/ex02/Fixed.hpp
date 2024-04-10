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

		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& stout, const Fixed& Fixed);

#endif