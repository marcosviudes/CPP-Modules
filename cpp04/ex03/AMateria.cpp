#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria::AMateria() : _type("")
{
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria Constructor called" << std::endl;
}
/*
AMateria::AMateria( AMateria const &copy)
{
	std::cout << "AMateria Copy Constructor called" << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=( AMateria const &rhs)
{
	std::cout << "AMateria Assignment operator called" << std::endl;
	return *this;
}*/
std::string const & AMateria::getType() const
{
	return(this->_type);
}

AMateria *AMateria::clone()
{
	return(new)
}

std::ostream &operator<<( std::ostream & o, AMateria const &i)
{
	o << std::endl;
	return (o);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}