#include "phonebook.hpp"

Phonebook::Phonebook(){
	saved_contact = 0;
}

void Phonebook::showInstruction(){
	std::cout << 
		"\n********************\n"
		"Enter an action\n"
		"  ADD\n"
		"  SEARCH\n"
		"  EXIT\n"
		"********************\n\n";
}

void Phonebook::search(){
	std::cout << "|**********|**********|**********|**********|\n"
	 "|   Index  |   Name   | Lastname |   Nick   |\n"
	 "|**********|**********|**********|**********|" << std::endl;

	for(int i = 0; i < NUM_CONTACTS; i++){
		std::cout << "|" << std::setw(10) << i; contact[i].printContactHeader();
		std::cout << "|----------|----------|----------|----------|\n";
	}
	contact[1].printContactExtend(1);
}

void Phonebook::add(){
	std::cout << std::endl;
	this->contact[0].createContact();
	saved_contact++;
}

void Phonebook::printAll(){
	for(int i = 0; i < NUM_CONTACTS; i++){
		contact[i].printContactHeader();
	}
}

void Phonebook::invalidInput(){
	std::cout << "invalid input" << std::endl;
}