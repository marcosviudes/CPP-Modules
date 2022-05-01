#pragma once
#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog: public Animal
{
	private:
		/* data */
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog();

		Dog & operator=(Dog const &rhs);
		void	makeSound(void) const;
};


