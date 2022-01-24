#ifndef CONTACT_CPP
# define CONTACT_CPP
# include <iostream>
# include <iomanip>
# include <string>

# define MAX_WIDTH		10
# define WIDTH			30

class Contact{
	public:
		Contact();

		std::string getName();
		std::string getLastName();
		std::string getNickname();
		bool		getIsEmpty();
	
		void printContactHeader();
		void printContactExtend();
		void createContact();
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
		bool		_is_empty;
};
void truncateField(const std::string classField);
#endif