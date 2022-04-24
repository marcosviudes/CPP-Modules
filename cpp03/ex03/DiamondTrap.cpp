#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
		std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_Name = name;
	this->ClapTrap::_Name = name + "_clap_name";
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &rhs)
{
	this->_Name = rhs.getName();
	this->_attackDamage = rhs.getAttackDamage();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_hitPoints = rhs.getHitPoints();
	std::cout << "DiamondTrap Assign operator called" << std::endl;	
	return(*this);
}

void DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_Name << " and my ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_Name << " deleted" << std::endl;
}
