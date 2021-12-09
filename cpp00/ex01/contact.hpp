#ifndef CONTACT_CPP
# define CONTACT_CPP
# include <iostream>
# include <string>

class Contact{
	public:
		Contact();

		void createContact();
		void printContact();
		std::string getName();
		std::string getLastName();
		std::string getNickname();
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string phone;
		std::string darkest_secret;
};

#endif