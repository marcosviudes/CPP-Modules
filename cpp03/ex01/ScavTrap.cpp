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
	(void)rhs;
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

void ScavTrap::takeDamage(unsigned int amount)
{
	if(_energyPoints > amount)
		_energyPoints -= amount;
	else
		_energyPoints = 0;
	std::cout << "ScavTrap " << _Name 
				<< " received " << amount 
				<< " damage points and it is now " << _energyPoints 
				<< "" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout <<"ScavTrap "<< _Name << " had " << _energyPoints <<
		" Energy points, added " << amount << ", ";
	_energyPoints += amount;
	std::cout << _Name << " have " << _energyPoints <<
		" Energy points now" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	(void)src;
	//*this = src;
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_Name << " has entered in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " deleted" << std::endl;
}