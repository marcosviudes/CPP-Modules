#include "HumanB.hpp"

HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack(void){
	std::cout << _Name << " attacks with his" << this->weapon.getType() << std::endl;
}