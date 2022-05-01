#include <iostream>
#include <string>
#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->_type = rhs.getType();
	std::cout << "Cat Assignation operator called" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Cat says \"Meeeeooooowww\"" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}