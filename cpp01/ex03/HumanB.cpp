#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon *newWeapon)
{
	weaponType = newWeapon;
}

void HumanB::attack(void){
	std::cout << _name << " attacks with his" << this->weaponType->getType() << std::endl;
}