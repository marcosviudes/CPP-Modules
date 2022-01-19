# include "Zombie.hpp"

int		main(void)
{
	Zombie *juan;

	randomChump("stack");
	juan = newZombie("heap");
	juan->announce();
	delete juan;
}