#include "fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	_fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int i)
{
	this->_fixedPoint = i;
}

Fixed::Fixed(const float f)
{
	this->_fixedPoint = i;
}

float Fixed::toFloat(void) const
{
	return((float)_fixedPoint); //esto está mal;
}
Fixed& Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl; 
	this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	_fixedPoint = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}