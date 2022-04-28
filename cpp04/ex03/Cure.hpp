#pragma once
#include "AMateria.hpp"

class Cure: public AMateria
{
	private:
		/*Private variables*/
		std::string _name;
	public:
		Cure(void);
		Cure(std::string name);
		Cure( Cure const &copy);
		~Cure();

		Cure &operator=( Cure const &rhs);
		AMateria* 	clone() const;
		void		use(ICharacter& target);
};
