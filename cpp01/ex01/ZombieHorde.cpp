#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
	this->name_ = name;
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde;
	
	horde = new Zombie [N];
	for(int i = 0; i < N; i++)
		horde[i].setName(name + "_" + std::to_string(i));
	return (horde);
}