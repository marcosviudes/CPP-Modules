#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::ifstream &input, std::ifstream &database)
{
	(void) input;
	try{
		this->parseDB(database);
	}catch(char const *error){
		std::cerr << "Error: " << error << std::endl;
	}
	std::cout << "BitcoinExchange Created" << std::endl;
	return;
}

BitcoinExchange::~BitcoinExchange()
{
	(void);
}

void BitcoinExchange::parseDB(std::ifstream &fileData){
	std::string line;
	std::string	key;
	double		value;

	(void) value;
	if(fileData.is_open())
	{
		std::getline(fileData, line);
		while(std::getline(fileData, line)){
			size_t pos = line.find(",");
			std::string date = line.substr(0, pos);
			double value = std::atof((line.substr(line.find(",") + 1, std::string::npos).c_str()));
			std::pair <std::string, double> asdf(date, value);
			this->_db.insert(asdf);
		}
#ifdef DEBUG /////////////////
		std::map<std::string, double>::const_iterator it;
		for (it = this->_db.begin(); it != this->_db.end(); ++it){
			std::cout << it->first << ": " << it->second << std::endl;
		}
#endif ///////////////////
		return;
	}
	fileData.close();
	throw "Invalid file";
}

void BicoinExchange::execute()
{

}

bool validateDate(std::string date)
{
	bool ret = true;
	(void)date;
	return(ret);
}