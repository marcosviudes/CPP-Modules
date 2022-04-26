#include "AMateria.hpp"
//#include "Character.hpp"

class Character: ICharacter
{
	private:
		AMateria*	_inventory[4];
	public:
		Character(void);
		Character(/*args*/);
		Character( Character const &copy);
		~Character();

		Character &operator=( Character const &rhs);

};
std::ostream &operator<<( std::ostream &o, Character const &i);


//#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character(void)
{
	std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(/*args*/)
{
	std::cout << "Character Constructor called" << std::endl;
}

Character::Character( Character const &copy)
{
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = copy;
}

Character &Character::operator=( Character const &rhs)
{
	std::cout << "Character Assignment operator called" << std::endl;
	return *this;
}

std::ostream &operator<<( std::ostream & o, Character const &i)
{
	o << std::endl;
	return (o);
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
}