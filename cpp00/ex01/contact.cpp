#include "./contact.hpp"

void Contact::createContact(){
	std::cout << "***************\n" 
				"Add new contact\n"
				"***************" << std::endl;
	std::cout << "Name: "; std::getline(std::cin, this->_first_name);
	std::cout << "Last Name: "; std::getline(std::cin, this->_last_name);
	std::cout << "nickname: "; std::getline(std::cin, this->_nickname);
}

void Contact::printContactHeader(){
	//std::cout << "Name: " << _first_name << " Lastname: " << _last_name << " nickname: " << nickname << std::endl;
	std::cout << "|" << this->_first_name << "|          |          |\n";
}

void Contact::printContactExtend(int index){
	std::cout << "\n|**********|**********|**********|**********|**********|\n"
	  "|   Name   | Lastname |   Nick   |   Phone  |  Secret  |\n"
	  "|**********|**********|**********|**********|**********|" << std::endl;
	std::cout << "|" << std::setw(10) << index << "|" <<  this->getName();
}


Contact::Contact(){
	(void)_write_enable;
	_is_empty = 1;
	return;
}
std::string	Contact::getName(){
	return(_first_name);
}

std::string	Contact::getLastName(){
	return(_last_name);
}

std::string	Contact::getNickname(){
	return(_nickname);
}
