#include "./Contact.hpp"

void Contact::createContact(){
	std::cout << "Add new contact:\n";
	std::cout << "Name: "; std::cin >> first_name;
	std::cout << "Last Name: "; std::cin >> last_name;
	std::cout << "nickname: "; std::cin >> nickname;
}

void Contact::printContact(){
	std::cout << "Name: " << first_name << " Lastname: " << last_name << " nickname: " << nickname << std::endl;
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
