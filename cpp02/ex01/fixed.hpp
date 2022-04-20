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
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;

	private:
		int					_fixedPoint;
		static int const	_fracBit = 8;
};
std::ostream&	operator<<(std::ostream &o, Fixed const & rhs);