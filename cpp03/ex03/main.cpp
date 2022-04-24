#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void){
	ClapTrap clap("clap");
	ScavTrap scav("scav");
	FragTrap frag("frag");
	FragTrap *frag2 = new FragTrap("frag2");
	DiamondTrap	diamond("diamond");
	std::string	target;

	target = "target";
	std::cout << std::endl;

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

	frag2->attack(target);
	frag2->takeDamage(31);
	frag2->beRepaired(51);
	frag2->highFivesGuys();
	delete frag2;
	std::cout << std::endl;

	diamond.whoAmI();
	std::cout << std::endl;
	diamond.attack(target);
	diamond.takeDamage(13);
	diamond.beRepaired(15);
	diamond.guardGate();
	diamond.highFivesGuys();
	std::cout << std::endl;
	return(0);
}
