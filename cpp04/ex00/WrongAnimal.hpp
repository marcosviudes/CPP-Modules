#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	private:
		/* data */
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal();
		WrongAnimal &operator=(WrongAnimal const &rhs);

		void	makeSound(void) const;

		std::string getType() const;
};