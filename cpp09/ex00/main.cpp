#include "./BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#define DATABASE_FILENAME "./data.csv"

int	open_check_file(std::ifstream &fd, std::string filename)
{
	fd.open(filename);
	if(!fd.is_open() || !fd.good())
	{
		fd.close();
		std::cerr << "Imposible to open: \"" << filename << "\" correctly" << std::endl;
		return (1);
	}
	return(0);
}

int main(int argc, char **argv)
{
	std::ifstream	input;
	std::ifstream	database;
	std::string		input_filename;

	if(argc == 2)
	{
		if(open_check_file(input, (std::string)argv[1]) == 1)
			return(-1);
		if(open_check_file(database, DATABASE_FILENAME) == 1)
			return(-1);
		BitcoinExchange change = BitcoinExchange(input, database);
	}
	else
	{
		std::cerr << "Invalid args use: " << argv[0] << " [input file]" << std::endl;
		return(-1);
	}
	return(0);
}
