#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>
#include <iostream>

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource Default Constructor called" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const &copy)
{
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	*this = copy;
}

MateriaSource &MateriaSource::operator=( MateriaSource const &rhs)
{
	_iceKnowledge = rhs._iceKnowledge;
	_cureKnoledge = rhs._cureKnoledge;
	std::cout << "MateriaSource Assignment operator called" << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (materia->getType() == "ice")
		this->_iceKnowledge = true;
	else if (materia->getType() == "cure")
		this->_cureKnoledge = true;
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type == "cure" && this->_cureKnoledge == true)
		return (new Cure());
	else if (type == "ice" && this->_iceKnowledge == true)
		return (new Ice());
	else
		return 0;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
}
