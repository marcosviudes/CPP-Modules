#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _Name;

	public:
		HumanA(std::string name, std::string type);
		HumanA(/* args */);
		~HumanA();

		Weapon weaponType;
		void	attack();
		
		void	setName(std::string name);
		void	setWeapon(Weapon NewWeapon);
};