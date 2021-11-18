#include "phonebook.hpp"

Phonebook::Phonebook(){}

void Phonebook::search(){
	for(int i = 0; i < NUM_CONTACTS; i++){
		std::cout << i << ": Name: " << contact[i].getName() << ", ";
		std::cout << "last_name: " << contact[i].getLastName() << "\n";
	}
}

void Phonebook::add(){
	std::cout << "this add contacts" << std::endl;
}