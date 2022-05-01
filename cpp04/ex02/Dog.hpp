#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog: public Animal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(Dog const &src);
		virtual ~Dog();

		Dog & operator=(Dog const &rhs);
		void	makeSound(void) const;
		Brain *getBrain(void) const;
};
