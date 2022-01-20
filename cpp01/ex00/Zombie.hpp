#include <iostream>
#include <string>

class Zombie
{
	public:
		void announce(void);
		Zombie(std::string);
		Zombie(void);
		~Zombie();
	private:
		std::string	name_;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);


