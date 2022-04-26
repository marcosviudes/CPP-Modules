#pragma once
#include <iostream>
#include "ICharater.hpp"

class AMateria
{
	protected:
	/*	[...]*/
	std::string const _type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		/*[...]*/
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};