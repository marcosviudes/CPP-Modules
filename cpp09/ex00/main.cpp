#include "./BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#define NAME_DATABASE "./data.csv"

int	check_file(std::ifstream fd, std::string filename, std::string error)
{
	try
	{
		fd.open(filename);
	}catch(){
		std::cout << error << std::endl;
	}
	return(0);
}

int main(int argc, char **argv)
{
	std::ifstream input;
	std::ifstream database;
	std::string		input_filename;

	if(argc == 2)
	{
		/*input.open(argv[1]);
		if(!input.good())
		{
			input.close();
			std::cerr << "Error at open: " << argv[1] << std::endl;
			return (-1);
		}
		database.open(NAME_DATABASE);
		if(!database.good())
		{
			database.close();
			std::cerr << "File: database fail" << std::endl;
			return (-1);
		}*/
		check_file(input, (std::string)argv[1], "Error");
		input.close();
		return(0);
	}
	else
	{
		std::cerr << "Invalid args use: ./btc [input file]" << std::endl;
		return(-1);
	}
	return(0);
}
