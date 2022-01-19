#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _Name;
		Weapon _weaponType;

	public:
		HumanB(/* args */);
		~HumanB();

		void	attack();
};