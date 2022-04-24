#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_Name = name;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap & src)
{
	*this = src;
	std::cout << "FragTrap created from " << src.getName() << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	this->_Name = rhs.getName();
	this->_attackDamage = rhs.getAttackDamage();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_hitPoints = rhs.getHitPoints();
	std::cout << "FragTrap Assignation called" << std::endl;
	return *this;
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << _Name 
				<< " attack " << target
				<< ", causing " <<_attackDamage 
				<<" points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_Name << " high Fives" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " deleted" << std::endl;
}
