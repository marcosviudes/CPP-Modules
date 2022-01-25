#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*weaponType;

	public:
		HumanB(std::string name);
		HumanB(/* args */);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon &newWeapon);
};