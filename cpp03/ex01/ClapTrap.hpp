#include <iostream>
#include <string>

#pragma once

class ClapTrap
{
        private:
        std::string     _Name;
        int             _hitPoints;
        unsigned int    _energyPoints;
        int             _attackDamage;


	public:
		ClapTrap(/* args */);
		ClapTrap(std::string name);
        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
    ~ClapTrap();
};