#include <iostream>
#include <string>
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	this->_type = rhs.getType();
	std::cout << "WrongCat Assignation operator called" << std::endl;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat says \"Meeeeooooowww\"" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}