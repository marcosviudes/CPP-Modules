#include "./phonebook.hpp"

int main(void)
{
	Phonebook	phonebook;
	std::string input;
	
	for(;;){
		//std::cout << "Introduce an action\n";
		phonebook.showInstruction();
		std::getline(std::cin, input);
		if (input == "EXIT")
			exit (0);
		else if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
		//	std::cout << "esto hace search\n";
			phonebook.search();
		else
			std::cout << "invalid input" << std::endl;
		std::cout << std::endl;
	}
	return(0);
}