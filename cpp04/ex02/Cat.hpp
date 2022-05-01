#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Cat: public Animal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(Cat const &src);
		virtual ~Cat();

		Cat & operator=(Cat const &rhs);
		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};
