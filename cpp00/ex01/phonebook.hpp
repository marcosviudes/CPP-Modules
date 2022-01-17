#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

# include <iomanip>
# include "contact.hpp"
# define NUM_CONTACTS	8
# define MAX_WIDTH		10

class Phonebook{
	public:
		Phonebook();
		void	showInstruction();
		void	search();
		void	add();
		void	printAll();
		void	invalidInput();

		Contact contact[NUM_CONTACTS];
	private:
		void	addContact();
		int		saved_contact;
};

#endif