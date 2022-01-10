#include "./Contact.hpp"

void Contact::createContact(){
	std::cout << "***************\n" 
				"Add new contact\n"
				"***************" << std::endl;
	std::cout << "Name: "; std::getline(std::cin, this->first_name);
	std::cout << "Last Name: "; std::getline(std::cin, this->last_name);
	std::cout << "nickname: "; std::getline(std::cin, this->nickname);
}

void Contact::printContactHeader(){
	//std::cout << "Name: " << first_name << " Lastname: " << last_name << " nickname: " << nickname << std::endl;
	std::cout << 	"|          |          |          |\n";
}

void Contact::printContactExtend(int index){
	std::cout << "\n|**********|**********|**********|**********|**********|**********|\n"
	  "|   Index  |   Name   | Lastname |   Nick   |   Phone  |  Secret  |\n"
	  "|**********|**********|**********|**********|**********|**********|" << std::endl;
	std::cout << "|" << std::setw(10) << index << "|" <<  this->getName();
}


Contact::Contact(){
	return;
}
std::string	Contact::getName(){
	return(first_name);
}

std::string	Contact::getLastName(){
	return(last_name);
}

std::string	Contact::getNickname(){
	return(nickname);
}
