#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal& Animal::operator=(Animal const &rhs)
{
	this->_type = rhs.getType();
	std::cout << "Animal Assignation operator called" << std::endl;
	return (*this);
}

std::string Animal::getType(void) const
{
	return(_type);
}

void Animal::makeSound(void) const
{
	std::cout << "WTF, Class Animal makes a sound?" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}