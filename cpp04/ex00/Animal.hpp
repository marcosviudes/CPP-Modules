#pragma once
#include <string>
#include <iostream>

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

		virtual void	makeSound(void) const;

		std::string getType() const;
};