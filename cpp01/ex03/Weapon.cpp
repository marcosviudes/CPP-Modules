#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string Weapon::getType(void)
{
	return((const std::string) _type);
}

Weapon::~Weapon(void)
{
}
