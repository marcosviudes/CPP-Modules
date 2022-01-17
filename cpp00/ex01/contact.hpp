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
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		bool		_write_enable;
		bool		_is_empty;
};

#endif