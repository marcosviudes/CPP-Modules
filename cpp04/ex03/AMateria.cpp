#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

AMateria::AMateria() : _type("")
{
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria( AMateria const &copy)
{
	*this = copy;
	std::cout << "AMateria Copy Constructor called" << std::endl;
}

AMateria &AMateria::operator=( AMateria const &rhs)
{
	this->_type = rhs.getType();
	std::cout << "AMateria Assignment operator called" << std::endl;
	return *this;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	return;
}
std::string const & AMateria::getType() const
{
	return(this->_type);
}

/*
AMateria *AMateria::clone()
{
	return(new)
}*/

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}
