#include "Ice.hpp"
#include <string>
#include <iostream>

Ice::Ice(void)
{
	std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(std::string name)
{
	this->_name = name;
	this->_type = "ice";
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::Ice( Ice const &copy)
{
	std::cout << "Ice Copy Constructor called" << std::endl;
	*this = copy;
}

Ice &Ice::operator=( Ice const &rhs)
{
	this->_name = rhs._name;
	std::cout << "Ice Assignment operator called" << std::endl;
	return *this;
}

AMateria *Ice::clone() const
{
	return(new Ice(*this));
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at *" << target.getName() << std::endl;
}
/*
std::ostream &operator<<( std::ostream & o, Ice const &i)
{
	o << std::endl;
	return (o);
}
*/
Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}
