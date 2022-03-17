#include "ClapTrap.hpp"

int main(void){
    ClapTrap hola("pene");
	std::string	target;

	target = "Jimmy";
	hola.attack(target);
	hola.takeDamage(3);
	hola.beRepaired(5);
    return(0);
}