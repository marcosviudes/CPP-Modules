#pragma once
#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat: public Animal
{
	private:
		/* data */
	public:
		Cat(void);
		Cat(Cat const &src);
		~Cat();

		Cat & operator=(Cat const &rhs);
		void	makeSound(void) const;
};
