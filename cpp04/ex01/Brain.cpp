#include "Brain.hpp"
#include <string>
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain( Brain const &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=( Brain const &rhs)
{
	int i;

	for (i = 0; i < NUM_IDEAS; i++)
		this->ideas[i] = rhs.ideas[i];
	std::cout << "Brain Assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}
