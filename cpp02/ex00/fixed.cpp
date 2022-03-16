#include "fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return(0);
}

void Fixed::setRawBits(int const raw)
{
    (void) raw;
}

Fixed::~Fixed(void){}