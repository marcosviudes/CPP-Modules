#include "Cure.hpp"
#include <string>
#include <iostream>

Cure::Cure(void)
{
	this->_type = "cure";
	std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(std::string name)
{
	this->_name = name;
	this->_type = "cure";
	std::cout << "Cure Constructor called" << std::endl;
}

Cure::Cure( Cure const &copy)
{
	std::cout << "Cure Copy Constructor called" << std::endl;
	*this = copy;
}

Cure &Cure::operator=( Cure const &rhs)
{
	this->_name = rhs._name;
	std::cout << "Cure Assignment operator called" << std::endl;
	return *this;
}

AMateria *Cure::clone() const
{
	return(new Cure(*this));
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals" << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}
