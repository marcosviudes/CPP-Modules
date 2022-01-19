#include "HumanA.hpp"

HumanA::HumanA(std::string name)
{
	_Name = name;
}

HumanA::HumanA(std::string name, std::string type)
{
	_Name = name;
	weaponType.setType(type);
}

HumanA::~HumanA()
{
}

void HumanA::attack(void){
	std::cout << _Name << " attacks with his" << this->weaponType.getType() << std::endl;
}

void HumanA::setWeapon(NewWeapon){
	
}

void HumanA::setName(std::string name)
{
	_Name = name;
}