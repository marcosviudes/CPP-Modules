#include <iostream>
#include "fixed.hpp"
#include <iostream>
/*
int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
return 0;
}
*/
int main( void ) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed d(2);
	Fixed c(4);
	Fixed e;
	e = d;

	std::cout << "a vale: " << a << std::endl;
	std::cout << "b vale: " << b << std::endl;
	std::cout << "c vale: " << c << std::endl;
	std::cout << "d vale: " << d << std::endl;
	std::cout << "e vale: " << e << std::endl;
	std::cout << std::endl << "-----------------------------" << std::endl;
	std::cout << "la operacion ++a es igual a: " << ++a << " y a vale: " << a << std::endl;
	std::cout << "la operación a++ es igual a: " << a++ << " y a vale: " << a << std::endl;
	std::cout << "la operación --a es igual a: " << --a << " y a vale: " << a << std::endl;
	std::cout << "la operación a-- es igual a: " << a-- << " y a vale: " << a << std::endl;

	std::cout << std::endl << "-----------------------------" << std::endl;
	std::cout << "a vale: " << a << " y b vale: " << b << " el maximo es: " << Fixed::max(a, b) << std::endl;
	std::cout << "a vale: " << a << " y b vale: " << b << " el minimo es: " << Fixed::min(a, b) << std::endl;
	
	std::cout << std::endl << "-----------------------------" << std::endl;
	std::cout << "a vale: " << a << " y b vale: " << b << " | a - b es = " << a - b << std::endl;
	std::cout << "a vale: " << a << " y b vale: " << b << " | b - a es = " << b - a << std::endl;
	std::cout << "d vale: " << d << " y b vale: " << b << " | d + b es = " << d + b << std::endl;
	
	std::cout << std::endl << "-----------------------------" << std::endl;
	std::cout << "d vale: " << d << " y b vale: " << b << " | d * b es = " << d * b << std::endl;
	std::cout << "d vale: " << d << " y b vale: " << b << " | b / d es = " << b / d << std::endl;
	
	std::cout << std::endl  << "-----------------------------" << std::endl;

	std::cout << "a vale: " << a << " y b vale: " << b << " | b > a es = " << std::boolalpha << (b > a) << std::endl;
	std::cout << "a vale: " << a << " y b vale: " << b << " | b < a es = " << std::boolalpha << (b < a)<< std::endl;
	std::cout << "c vale: " << c << "| c < 4 es = " << std::boolalpha << (c < 4)<< std::endl;
	std::cout << "c vale: " << c << "| c < 5 es = " << std::boolalpha << (c < 5)<< std::endl;
	std::cout << "c vale: " << c << "| c <= 4 es = " << std::boolalpha << (c <= 4)<< std::endl;
	std::cout << "c vale: " << c << "| c > 4 es = " << std::boolalpha << (c > 4)<< std::endl;
	std::cout << "c vale: " << c << "| c > 5 es = " << std::boolalpha << (c > 5)<< std::endl;
	std::cout << "c vale: " << c << "| c >= 4 es = " << std::boolalpha << (c >= 4)<< std::endl;
	std::cout << "c vale: " << c << "| c == 4 es = " << std::boolalpha << (c == 4)<< std::endl;
	std::cout << "c vale: " << c << "| c != 4 es = " << std::boolalpha << (c != 4)<< std::endl;
return 0;
}