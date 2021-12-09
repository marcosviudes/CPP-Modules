#include "./phonebook.hpp"

int main(void)
{
	Phonebook	phonebook;
	
	phonebook.search();
	phonebook.add();
	//phonebook.contact[1].createContact();
	phonebook.print_all();
	return(0);
}
