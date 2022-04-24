#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#pragma once

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_Name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap();

		DiamondTrap &operator=(DiamondTrap &rhs);
		
		virtual void attack(std::string const &target);
		void whoAmI(void); 
};

