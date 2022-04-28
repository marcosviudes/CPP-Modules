#include "MateriaSource.hpp"
#include <string>
#include <iostream>

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource Default Constructor called" << std::endl;
}
/*
MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Constructor called" << std::endl;
}
*/
MateriaSource::MateriaSource( MateriaSource const &copy)
{
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	*this = copy;
}

MateriaSource &MateriaSource::operator=( MateriaSource const &rhs)
{
	for(int i = 0; i < NUM_INVENTORY; i++)
		this->_inventory[i] = rhs._inventory[i];
	std::cout << "MateriaSource Assignment operator called" << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	(void)materia;
	return;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	(void)type;
	return NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
}
