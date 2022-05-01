#pragma once
#include "AMateria.hpp"

class Ice: public AMateria
{
	private:
		/*Private variables*/
		std::string _name;
	public:
		Ice(void);
		Ice(std::string name);
		Ice( Ice const &copy);
		~Ice();

		Ice &operator=( Ice const &rhs);
		AMateria* 	clone() const;
		void		use(ICharacter& target);
};
