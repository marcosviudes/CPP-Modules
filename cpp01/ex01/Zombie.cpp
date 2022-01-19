#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
		_Name = name;
}

Zombie::Zombie(void)
{
	this->_Name = "";
}

Zombie::~Zombie()
{
	std::cout << _Name<< " was killed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}