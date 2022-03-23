#include <iostream>
#include <string>

#pragma once

class ClapTrap
{
	private:
		std::string _name;
		int         _hitPoints
		int         _energyPoints;
		int         _attackDamage;

	public:
		void    attack(std::string const &target);
		void    takeDamage(unsigned int amount);
		void    beRepired(unsigned int amount);
		ClapTrap(/* args */);
    ~ClapTrap();
};