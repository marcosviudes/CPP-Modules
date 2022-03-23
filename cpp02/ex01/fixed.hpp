#include <iostream>

#pragma once

class Fixed{
	public:
		Fixed(void);
		Fixed(const Fixed & copy);
		Fixed(const int i);
		~Fixed();

		Fixed& 		operator=(Fixed const & rhs);
		Fixed 		operator<<(Fixed const & rhs);
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;

	private:
		int                 _fixedPoint;
		static int const    _fracBit = 8;
};