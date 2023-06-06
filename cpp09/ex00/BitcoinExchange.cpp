#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::ifstream &input, std::ifstream &database)
{
	(void) input;
	this->parseDB(database);
	std::cout << "BitcoinExchange Created" << std::endl;
	return;
}

BitcoinExchange::~BitcoinExchange()
{

}

bool parseDB(std::ifstream &fileData){
	std::string line;
	std::string	key;
	double		value;

	if(fileData.is_open())
	{
		while(std::getline(fileData, line)){

		}
	}
	fileData.close();
}