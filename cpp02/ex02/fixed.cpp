#include "fixed.hpp"
#include <iostream>
#include <cmath>

/*******************************
			CONSTRUCTOR
********************************/

Fixed::Fixed(void)
{
	_fixedPoint = 0;
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
//	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	this->_fixedPoint = i << _fracBit;
//	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	this->_fixedPoint = std::roundf(f * (1 << _fracBit));
//	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
//	std::cout << "Assignation operator called" << std::endl; 
	this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

/*******************************
	COMPARASION OPERATORS
********************************/

bool Fixed::operator>(Fixed const & rhs) const
{
	if(this->getRawBits() > rhs.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	if(this->getRawBits() >= rhs.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator<(Fixed const & rhs) const
{
	if(this->getRawBits() < rhs.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	if(this->getRawBits() <= rhs.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator==(Fixed const & rhs) const
{
	if(this->getRawBits() == rhs.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	if(this->getRawBits() != rhs.getRawBits())
		return(true);
	return (false);
}

std::ostream&	operator<<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

/*******************************
		ARITHMETIC OPERATORS
********************************/

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/*******************************
  INCREMENT DECREMENT OPERATORS
********************************/

Fixed& Fixed::operator++()	//Prefix:	++i;
{
	this->_fixedPoint += 1;
	return(*this);
}

Fixed Fixed::operator++(int) //Postfix:	i++;
{
	Fixed temp(*this);

	this->_fixedPoint += 1;
	return(temp);
}

Fixed& Fixed::operator--()	//Prefix:	--i;
{
	this->_fixedPoint -= 1;
	return(*this);
}

Fixed Fixed::operator--(int) //Postfix:	i--;
{
	Fixed temp(*this);

	this->_fixedPoint -= 1;
	return(temp);
}

/*******************************
		MEMBER FUNCTIONS
********************************/

const Fixed&		Fixed::min(const Fixed& a, const Fixed& b) 
{
	if(a.getRawBits() < b.getRawBits())
		return (a);
	return(b);
}

const Fixed&		Fixed::max(const Fixed& a, const Fixed& b)
{
	if(a.getRawBits() > b.getRawBits())
		return(a);
	return(b);
}

float Fixed::toFloat(void) const
{
	return((float)this->_fixedPoint / (float)(1 << this->_fracBit));
}

int Fixed::toInt(void) const
{
	return (float)this->_fixedPoint / (float)(1 << this->_fracBit);
}

/*******************************
			GETTERS
********************************/

int Fixed::getRawBits(void) const
{
	return(_fixedPoint);
}

/*******************************
			SETTERS
********************************/

void Fixed::setRawBits(int const raw)
{
	_fixedPoint = raw;
}

/*******************************
			DESTRUCTOR
********************************/

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
}