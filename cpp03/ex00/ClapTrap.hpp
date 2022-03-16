#include <iostream>
#include <string>

#pragma once

class ClapTrap
{
	private:
        std::string _Name;
        int         _hitPoints
        int         _energyPoints;
        int         _AttackDamage;

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepired(unsigned int amount);
	public:
		ClapTrap(/* args */);
    ~ClapTrap();
};