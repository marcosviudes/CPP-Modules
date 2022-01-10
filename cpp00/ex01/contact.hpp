#ifndef CONTACT_CPP
# define CONTACT_CPP
# include <iostream>
# include <iomanip>
# include <string>

class Contact{
	public:
		Contact();
		void printContactHeader();
		void printContactExtend(int index);
		void createContact();

		std::string getName();
		std::string getLastName();
		std::string getNickname();
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		bool		write_enable;
};

#endif