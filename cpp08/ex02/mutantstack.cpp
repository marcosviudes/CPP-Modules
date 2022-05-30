#include "mutantstack.hpp"
#include <string>
#include <iostream>

Mutantstack::Mutantstack(void)
{
	std::cout << "Mutantstack Default Constructor called" << std::endl;
}

Mutantstack::Mutantstack( Mutantstack const &copy)
{
	std::cout << "Mutantstack Copy Constructor called" << std::endl;
	*this = copy;
}

Mutantstack &Mutantstack::operator=( Mutantstack const &rhs)
{
	std::cout << "Mutantstack Assignment operator called" << std::endl;
	return *this;
}

Mutantstack::~Mutantstack()
{
	std::cout << "Mutantstack Destructor called" << std::endl;
}	