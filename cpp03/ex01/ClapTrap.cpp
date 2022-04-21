#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_Name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << name << " Created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & src)
{
	_Name = src.getName();
	_hitPoints = src.getHitPoints();
	_energyPoints = src.getEnergyPoints();
	_attackDamage = src.getAttackDamage();
	std::cout << "ClapTrap created from " << src.getName() << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap Assign operator called" << std::endl;
	this->_Name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << _Name 
				<< " attack " << target
				<< ", causing " <<_attackDamage 
				<<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(_energyPoints > amount)
		_energyPoints -= amount;
	else
		_energyPoints = 0;
	std::cout << "ClapTrap " << _Name 
				<< " received " << amount 
				<< " damage points and it is now " << _energyPoints 
				<< "" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout <<"ClapTrap "<< _Name << " had " << _energyPoints <<
		" Energy points, added " << amount << ", ";
	_energyPoints += amount;
	std::cout << _Name << " have " << _energyPoints <<
		" Energy points now" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return _Name;
}

int	ClapTrap::getHitPoints(void) const
{
	return _hitPoints;
}

int	ClapTrap::getEnergyPoints(void) const
{
	return _energyPoints;
}

int	ClapTrap::getAttackDamage(void) const
{
	return _attackDamage;
}

void ClapTrap::setName(std::string name)
{
	this->_Name = name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}
void ClapTrap::setEnergyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}
void ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _Name << " deleted" << std::endl;
}