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
		~Animal();
		Animal & operator=(Animal const &rhs);

		void	makeSound(void) const;

		std::string getType() const;
};