#pragma once
#include "AMateria.hpp"
#include <iostream>

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria* src) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};
