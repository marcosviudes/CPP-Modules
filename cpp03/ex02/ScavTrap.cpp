#include "ScavTrap.hpp"


ScavTrap::ScavTrap(/* args */)
{
		std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
	this->setName(_name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_Name			= rhs.getName();
	this->_attackDamage	= rhs.getAttackDamage();
	this->_energyPoints	= rhs.getEnergyPoints();
	this->_hitPoints	= rhs.getHitPoints();
	std::cout << "ScavTrap Assignation called" << std::endl;
	return *this;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << _Name 
				<< " attack " << target
				<< ", causing " <<_attackDamage 
				<<" points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_Name << " has entered in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " deleted" << std::endl;
}