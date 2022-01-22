#include "./contact.hpp"

Contact::Contact(){
	_is_empty = 1;
	return;
}

void Contact::createContact(){
	std::cout << "***************\n" 
				 "Add new contact\n"
				 "***************"	<< std::endl;
	std::cout << "  First Name: ";		std::getline(std::cin, this->_first_name);
	std::cout << "  Last Name: ";	std::getline(std::cin, this->_last_name);
	std::cout << "  Nickname: ";	std::getline(std::cin, this->_nickname);
	std::cout << "  Phone: ";		std::getline(std::cin, this->_phone);
	std::cout << "  Secret: ";		std::getline(std::cin, this->_secret);
	_is_empty = 0;
}	

void truncateField(const std::string classField){
	std::string temp;

	temp = classField.substr(0, MAX_WIDTH - 1);
	if(classField.length() >= MAX_WIDTH)
		std::cout << std::setw(MAX_WIDTH) <<  temp + ".|";
	else
		std::cout << std::setw(MAX_WIDTH) << classField << "|";
}

void Contact::printContactHeader(){
	truncateField((const std::string)this->_first_name);
	truncateField((const std::string)this->_last_name);
	truncateField((const std::string)this->_nickname);
	std::cout << "\n";
}

void Contact::printContactExtend(){
	if(!_is_empty){
		std::cout << std::setw(WIDTH) << "First Name | " << this->_first_name << std::endl;
		std::cout << std::setw(WIDTH) << "Last name: | " << this->_last_name << std::endl;
		std::cout << std::setw(WIDTH) << "Nick: | " << this->_nickname << std::endl;
		std::cout << std::setw(WIDTH) << "Phone: | " << this->_phone << std::endl;
		std::cout << std::setw(WIDTH) << "Secret: | " << this->_secret << std::endl;
	}
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

bool Contact::getIsEmpty(){
	return(_is_empty);
}