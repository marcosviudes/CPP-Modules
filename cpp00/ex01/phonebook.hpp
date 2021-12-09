#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

#include "Contact.hpp"
# define NUM_CONTACTS 8

class Phonebook{
	public:
		Phonebook();
		void search();
		void add();

		void print_all();

		Contact contact[NUM_CONTACTS];
	private:
		void	addContact();

		int		flag_write;
};

#endif