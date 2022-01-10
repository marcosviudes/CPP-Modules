#include "phonebook.hpp"

Phonebook::Phonebook(){
	saved_contact = 0;
}

void Phonebook::showInstruction(){
	std::cout << 
		"\n********************\n"
		"Introduce an action\n"
		"  ADD\n"
		"  SEARCH\n"
		"  tEXIT\n"
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
	std::cout<< std::endl;
	this->contact[0].createContact();
	saved_contact++;
}

void Phonebook::print_all(){
	for(int i = 0; i < NUM_CONTACTS; i++){
		contact[i].printContactHeader();
	}
}