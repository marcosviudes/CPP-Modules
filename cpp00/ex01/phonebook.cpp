#include "phonebook.hpp"

Phonebook::Phonebook(){
	flag_write = 0;
}

void Phonebook::search(){
	for(int i = 0; i < NUM_CONTACTS; i++){
		std::cout << i << ": Name: " << contact[i].getName() << ", ";
		std::cout << "last_name: " << contact[i].getLastName() << "\n";
	}
}

void Phonebook::add(){
	std::cout << "this add contacts" << std::endl;
	if(flag_write == NUM_CONTACTS){
		std::cout << "this add contacts whe contacts is full" << std::endl;
	}
	contact[flag_write].createContact();
	if(flag_write < NUM_CONTACTS)
		flag_write++;
}

void Phonebook::print_all(){
	for(int i = 0; i < NUM_CONTACTS; i++){
		contact[i].printContact();
	}
}