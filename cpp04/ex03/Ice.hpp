#pragma once
#include "AMateria.hpp"

class Ice: AMateria
{
	private:
		/*Private variables*/
		std::string _Name;
	public:
		Ice(void);
		Ice(std::string name);
		Ice( Ice const &copy);
		~Ice();

		Ice &operator=( Ice const &rhs);
		AMateria* 	clone();
		void		use(ICharacter&);
};
std::ostream &operator<<( std::ostream &o, Ice const &i);


#include "Ice.hpp"
#include <string>
#include <iostream>

Ice::Ice(void)
{
	std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(std::string name)
{
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::Ice( Ice const &copy)
{
	std::cout << "Ice Copy Constructor called" << std::endl;
	*this = copy;
}

Ice &Ice::operator=( Ice const &rhs)
{
	std::cout << "Ice Assignment operator called" << std::endl;
	return *this;
}

std::ostream &operator<<( std::ostream & o, Ice const &i)
{
	o << std::endl;
	return (o);
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}