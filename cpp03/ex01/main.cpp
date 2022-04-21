#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	ScavTrap scav("scav");
	ClapTrap clap("clap");
	std::string	target;

	target = "target";
	scav.attack(target);
	scav.takeDamage(13);
	scav.beRepaired(15);

	clap.attack(target);
	clap.takeDamage(3);
	clap.beRepaired(5);
	return(0);
}