#include <iostream>
#include <string>
#pragma once

class Weapon{
	private:
		std::string	_type;

	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		void setType(std::string type);

		const std::string getType(void);
};
