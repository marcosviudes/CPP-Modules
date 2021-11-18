#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

#include "Contact.hpp"
# define NUM_CONTACTS 8

class Phonebook{
	public:
		Phonebook();
		void search();
		void add();
	private:
		void	addContact();

		Contact contact[NUM_CONTACTS];
};

#endif