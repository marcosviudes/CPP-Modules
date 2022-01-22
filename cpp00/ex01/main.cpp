#include "./phonebook.hpp"

int main(void)
{
	Phonebook	phonebook;
	std::string input;
	
	phonebook.welcome();
	phonebook.showInstruction();
	for(;std::getline(std::cin, input);){
		if (input == "EXIT")
			exit (0);
		else if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else
			phonebook.invalidInput();
		std::cout << std::endl;
		phonebook.showInstruction();
	}
	return(0);
}