#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character(void)
{
	std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(std::string name): _name(name)
{
	this->_equipedInventory = 0;
	for(int i = 0; i < NUM_INVENTORY; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character Constructor called" << std::endl;
}

Character::Character( Character const &copy)
{
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = copy;
}

std::string const &Character::getName() const
{
	return(this->_name);
}

Character &Character::operator=( Character const &rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
	std::cout << "Character Assignment operator called" << std::endl;
	return *this;
}

void Character::equip(AMateria* m)
{
	if(!m)
		return;
	for(int i = 0; i < NUM_INVENTORY; i++)
	{
		if(!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if(idx < 0 || idx > (NUM_INVENTORY - 1) || !this->_inventory[idx])
		return;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if(idx < 0 || idx > (NUM_INVENTORY - 1) || !this->_inventory[idx])
		return;
	this->_inventory[idx]->use(target);
}


/*
std::ostream &operator<<( std::ostream & o, Character const &i)
{
	o << std::endl;
	return (o);
}
*/
Character::~Character()
{
	for(int i = 0; i < NUM_INVENTORY; i++)
		delete this->_inventory[i];
	std::cout << "Character Destructor called" << std::endl;
}
