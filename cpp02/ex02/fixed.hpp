#include <iostream>

#pragma once

class Fixed{
	public:
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed & copy);
		~Fixed();

		Fixed&		operator=(Fixed const & rhs);
		bool		operator>(Fixed const & rhs) const;
		bool		operator<(Fixed const & rhs) const;
		bool		operator<=(Fixed const & rhs) const;
		bool		operator>=(Fixed const & rhs) const;
		bool		operator==(Fixed const & rhs) const;
		bool		operator!=(Fixed const & rhs) const;

		Fixed		operator-(Fixed const & rhs) const;
		Fixed		operator*(Fixed const & rhs) const;
		Fixed		operator+(Fixed const & rhs) const;
		Fixed		operator/(Fixed const & rhs) const;
	
		Fixed		operator++(int);	//Postfix:	i++;
		Fixed&		operator++();		//Prefix:	++i;
		Fixed		operator--(int);	//Postfix:	--i;
		Fixed&		operator--();		//Prefix:	i--;

		static const	Fixed&		min(const Fixed& a, const Fixed& b);
		static const	Fixed&		max(const Fixed& a, const Fixed& b);
		float					toFloat( void ) const;
		int				toInt( void ) const;
		int				getRawBits( void ) const;

		void			setRawBits( int const raw );
		

	private:
		int					_fixedPoint;
		static int const	_fracBit = 8;
};
std::ostream&	operator<<(std::ostream &o, Fixed const & rhs);