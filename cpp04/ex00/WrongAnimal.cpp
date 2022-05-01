#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->_type = rhs.getType();
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return(_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WTF, Class WrongAnimal makes a sound?" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}