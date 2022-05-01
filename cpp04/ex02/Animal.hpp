#pragma once
#include <string>
#include <iostream>
#include "Brain.hpp"
class Animal
{
	protected:
		std::string _type;
	private:
		/* data */
	public:
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal();
		Animal &operator=(Animal const &rhs);

		virtual void	makeSound(void) const = 0;
		std::string getType() const;
};
