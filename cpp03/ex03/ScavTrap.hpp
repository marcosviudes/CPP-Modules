#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#pragma once

class ScavTrap : public virtual ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &rhs);
		virtual void		attack(std::string const &target);
		//void		takeDamage(unsigned int amount);
		//void		beRepaired(unsigned int amount);
		void		guardGate(void);
};
