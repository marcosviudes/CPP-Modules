#include <iostream>
#include <string>
#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(Dog const &rhs)
{
	this->_type = rhs.getType();
	std::cout << "Dog Assignation operator called" << std::endl;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Dog says \"Woof Woof\"" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}