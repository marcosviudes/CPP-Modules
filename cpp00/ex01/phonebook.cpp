#include "phonebook.hpp"

Phonebook::Phonebook(){
	_savedContact = 0;
}

void Phonebook::welcome(){
	std::cout <<
		"\n,--.   ,--.      ,--.                                  ,--.                    "
		"\n|  |   |  |,---. |  |,---. ,---. ,--,--,--.,---.     ,-'  '-. ,---.            "
		"\n|  |.'.|  | .-. :|  | .--'| .-. ||        | .-. :    '-.  .-'| .-. |           "
		"\n|   ,'.   \\   --.|  \\ `--.' '-' '|  |  |  \\   --.      |  |  ' '-' '  ,---. "
		"\n,--------.'`----,--.'`---' ,---. `--`--`--'`----,--.   `--'   `---'   |   |    "
		"\n'--.  .--',---. |  |,---. /  .-',--.,--.,--,--, |  |,-. ,---. ,--,--, |  .'    "
		"\n   |  |  | .-. :|  | .-. :|  `-,|  ||  ||      \\|     /| .-. :|      \\|  |   "
		"\n   |  |  \\   --.|  \\   --.|  .-''  ''  '|  ||  ||  \\   \\   --.|  ||  |`--' "
		"\n   `--'   `----'`--'`----'`--'   `----' `--''--'`--'`--'`----'`--''--'.--.     "
		"\n                                                                      '--'     "
		"\n_______________________________________________________________________________"
	<< std::endl;
}

void Phonebook::showInstruction(){
	std::cout << 
		"\n********************"
		"\nEnter an action"
		"\n  ADD"
		"\n  SEARCH"
		"\n  EXIT"
		"\n********************\n" << std::endl;
}

void Phonebook::search(){
	std::string buffin;

	std::cout <<
	 "\n|**********|**********|**********|**********|"
	 "\n|   Index  |First Name| Lastname |   Nick   |"
	 "\n|**********|**********|**********|**********|" << std::endl;

	for(int i = 0; i < NUM_CONTACTS; i++){
		if(!contact[i].getIsEmpty()){
			std::cout << "|" << std::setw(MAX_WIDTH) << i << "|";
			contact[i].printContactHeader();
			std::cout << "|----------|----------|----------|----------|\n";
		}
	}

	std::cout << "\nenter an index to stalk: ";
	std::getline(std::cin, buffin);
	if(buffin.length() == 1 && (buffin[0] >= '0' && buffin[0] <= '7'))
		if(contact[std::stoi(buffin)].getIsEmpty() == 0)
			contact[std::stoi(buffin)].printContactExtend();
		else
			std::cout << "> Empty Contact" << std::endl;
	else
		invalidInput();
}

void Phonebook::add(){
	std::cout << std::endl;
	this->contact[_savedContact % 8].createContact();
	_savedContact++;
}

void Phonebook::invalidInput(){
	std::cout << "> invalid input" << std::endl;
}