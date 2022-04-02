#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#pragma once

class ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap(std::string _name);
		ScavTrap();
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap &rhs);

		void		guardGate(void);
};

