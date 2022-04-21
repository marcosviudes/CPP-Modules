#include "fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	_fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	this->_fixedPoint = i << _fracBit;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	this->_fixedPoint = std::roundf(f * (1 << _fracBit));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return((float)this->_fixedPoint / (float)(1 << this->_fracBit));
}

int Fixed::toInt(void) const
{
	return (float)this->_fixedPoint / (float)(1 << this->_fracBit);
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