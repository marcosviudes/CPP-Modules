#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name_;
		Weapon		&weaponType;

	public:
		HumanA(std::string name, Weapon &WeaponType);
		/*HumanA();*/
		~HumanA();

		void	attack();
		
		void	setName(std::string name);
		void	setWeapon(Weapon &newWeapon);
};