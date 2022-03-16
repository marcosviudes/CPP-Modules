#include <iostream>
#include <string>
#include "Replace.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	Replace	replace;

	if(argc == 4)
	{
		replace.setFilename(argv[1]);
		replace.setString1(argv[2]);
		replace.setString2(argv[3]);
		std::cout << "tiene 3 argumentos" << std::endl;
		std::cout << "String 1: " << replace.getString1() << std::endl;
		std::cout << "String 2: " << replace.getString2() << std::endl;
		std::cout << "filename: " << replace.getFilename() << std::endl;
	}
	return(0);
}