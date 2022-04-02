#include "ScavTrap.hpp"


ScavTrap::ScavTrap(/* args */)
{
		std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
	this->setName(_name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &rhs)
{
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_Name << " has entered in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ClapTrap " << this->getName() << " deleted";
}