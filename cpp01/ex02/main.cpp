#include <iostream> 
#include <string>

int main(void)
{
	std::string	str = "HI THIS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = str;

	stringPTR = &str;

	std::cout << "STR :			" << str << std::endl;
	std::cout << "stringPTR :	" << stringPTR << "	contains:	" << *stringPTR << std::endl;
	std::cout << "stringREF :	" << &stringREF << " contains:	" << stringREF << std::endl;
	return (0);
}