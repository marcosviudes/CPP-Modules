#pragma once
#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat: public WrongAnimal
{
	private:
		/* data */
	public:
		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat();

		WrongCat & operator=(WrongCat const &rhs);
		void	makeSound(void) const;
};
