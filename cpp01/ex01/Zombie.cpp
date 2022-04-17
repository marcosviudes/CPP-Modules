#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
		name_ = name;
}

Zombie::Zombie(void)
{
	this->name_ = "";
}

Zombie::~Zombie()
{
	std::cout << name_<< " was killed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name_ << " BraiiiiiiinnnzzzZ..." << std::endl;
}