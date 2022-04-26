#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#pragma once

class ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &rhs);
		void		attack(std::string const &target);
		void		guardGate(void);
};
