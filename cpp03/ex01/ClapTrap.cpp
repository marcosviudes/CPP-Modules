#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name)
{
    _Name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap Created" << std::endl;
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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _Name << " deleted";
}