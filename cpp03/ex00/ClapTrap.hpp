#include <iostream>
#include <string>

#pragma once

class ClapTrap
{
	private:
		std::string	_Name;
		int			_hitPoints;
		int			_attackDamage;
		unsigned int			_energyPoints;

	public:
		ClapTrap(/* args */);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap & src);
		~ClapTrap();
		
		ClapTrap & operator=(ClapTrap const & rhs);

		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
};