#include "ClapTrap.hpp"

int main(void){
	ClapTrap clap("clap");
	std::string	target;

	target = "target";
	clap.attack(target);
	clap.takeDamage(3);
	clap.beRepaired(5);
	return(0);
}