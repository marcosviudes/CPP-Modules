#include "Karen.hpp"

Karen::Karen()
{
}

void Karen::debug( void ){
	std::cout << "I love to get extra bacon " << 
		"for my 7XL-double-cheese-triple-pickle-special-ketchup burger. " <<
		"I just love it!" << std::endl;
	return;
}

void Karen::info( void ){
	std::cout << "I cannot believe adding extra bacon cost more money. "<< 
				"You don’t put enough! If you did I would not have to ask" <<
				"for it!" << std::endl;
	return;
}

void Karen::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. " <<
			"I’ve been coming here for years and you just started working " <<
			"here last month." << std::endl;
	return;
}

void Karen::error( void ){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return;
}

void Karen::complain(std::string level){
	std::string def_levels[NUM_LEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 
	int		number;

	number = 4;
	for(int i = 0; i < NUM_LEVELS; i++)
		if(level == def_levels[i])
			number = i;
	
	switch (number)
	{
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
		default:
			break;
	}
	return;
}
	
Karen::~Karen()
{
}
