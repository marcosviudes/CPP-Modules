#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

# include <iomanip>
# include "contact.hpp"
# define NUM_CONTACTS	8

class Phonebook{
	public:
		Phonebook();
		void	welcome();
		void	showInstruction();
		void	search();
		void	add();
		void	printAll();
		void	invalidInput();

	private:
		Contact contact[NUM_CONTACTS];
		void	addContact();
		int		_savedContact;
};

#endif