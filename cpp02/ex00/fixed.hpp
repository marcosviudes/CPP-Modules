#include <iostream>

#pragma once

class Fixed{
	public:
		Fixed(void);
		Fixed(const Fixed & copy);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
	
	private:
		int                 _fixedPoint;
		static int const    _fracBit = 8;
};