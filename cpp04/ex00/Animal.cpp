#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "simpre constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy constructor called" << std::endl;
}

Animal& Animal::operator=(Animal const &rhs)
{
	this->_type = rhs.getType();
	return *this;
}

std::string Animal::getType(void) const
{
	return(_type);
}

void Animal::makeSound(void) const
{
	std::cout << "" << std::endl;
}
