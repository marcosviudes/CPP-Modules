#include "HumanA.hpp"
/*
HumanA::HumanA() : weaponType()
{
}*/

HumanA::HumanA(std::string name, Weapon &NewWeapon) : weaponType(NewWeapon)
{
	name_ = name;
	this->setWeapon(NewWeapon);
}

HumanA::~HumanA()
{
}

void HumanA::attack(void){
	std::cout << name_ << " attacks with his " << this->weaponType.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &NewWeapon){
	this->weaponType = NewWeapon;
}

void HumanA::setName(std::string name)
{
	name_ = name;
}