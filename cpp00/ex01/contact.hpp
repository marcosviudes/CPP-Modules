#ifndef CONTACT_CPP
# define CONTACT_CPP
# include <iostream>
# include <string>

class Contact{
	public:
		Contact();

		std::string getName();
		std::string getLastName();
		std::string getNickname();
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nikname;
};

#endif