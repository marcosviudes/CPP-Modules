#pragma once
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
	/*	[...]*/
	std::string _type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria( AMateria const &copy);
		virtual ~AMateria();
		/*[...]*/
		std::string const & getType() const; //Returns the materia type
		AMateria &operator=( AMateria const &rhs);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
