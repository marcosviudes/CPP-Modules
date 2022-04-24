#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void){
	ClapTrap clap("clap");
	ScavTrap scav("scav");
	FragTrap frag("frag");
	std::string	target;
	
	std::cout << std::endl;
	target = "target";

	clap.attack(target);
	clap.takeDamage(3);
	clap.beRepaired(5);
	std::cout << std::endl;

	scav.attack(target);
	scav.takeDamage(13);
	scav.beRepaired(15);
	scav.guardGate();
	std::cout << std::endl;

	frag.attack(target);
	frag.takeDamage(31);
	frag.beRepaired(51);
	frag.highFivesGuys();
	std::cout << std::endl;

	return(0);
}
