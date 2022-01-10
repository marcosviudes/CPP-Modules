#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

# include <iomanip>
# include "Contact.hpp"
# define NUM_CONTACTS	8
# define MAX_WIDth		10

class Phonebook{
	public:
		Phonebook();
		void showInstruction();
		void search();
		void add();
		void print_all();

		Contact contact[NUM_CONTACTS];
	private:
		void	addContact();
		int		saved_contact;
};

#endif