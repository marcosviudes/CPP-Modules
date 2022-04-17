# include "Zombie.hpp"

# define NUM_ZOMBIES 10

int		main(void)
{
	Zombie *horde;

	horde = zombieHorde(NUM_ZOMBIES, "juan");
	for(int i = 0; i < NUM_ZOMBIES; i++)
		horde[i].announce();
	delete[] horde;
}