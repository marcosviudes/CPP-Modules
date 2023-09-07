#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void){}

BitcoinExchange::BitcoinExchange(std::ifstream &database)
{
	try{
		this->parseDB(database);
	}catch(char const *error){
		std::cerr << "Error: " << error << std::endl;
	}
	return;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy)
{
	this->_db = cpy.getDB();
}

BitcoinExchange::~BitcoinExchange()
{
	this->_db.clear();
}

void BitcoinExchange::parseDB(std::ifstream &fileData){
	std::string line;
	std::string	key;

	if(fileData.is_open())
	{
		std::getline(fileData, line);
		while(std::getline(fileData, line)){
			size_t pos = line.find(",");
			std::string date = line.substr(0, pos);
			double value = std::atof((line.substr(line.find(",") + 1, std::string::npos).c_str())); //////////
			std::pair <std::string, double> asdf(date, value);
			this->_db.insert(asdf);
		}
#ifdef DEBUG /////////////////
		std::cout << "[DEBUG] START	| PARSE DATA\n" << std::endl;
		std::map<std::string, double>::const_iterator it;
		for (it = this->_db.begin(); it != this->_db.end(); ++it){
			std::cout << it->first << ": " << it->second << std::endl;
		}
		std::cout << "[DEBUG] END	|  PARSE DATA\n" << std::endl;
#endif ///////////////////
		fileData.close();
		return;
	}
	fileData.close();
	throw "Invalid file";
}

void BitcoinExchange::execute(std::ifstream	&input)
{
	std::string line;
	bool firstline = true;
	std::string delimiter = " | ";

	while(std::getline(input, line))
	{
		if(firstline == true){
			firstline = false;
			continue;
		}
		if(line.empty()){
			std::cerr << "Error: bad input => " << std::endl;
			continue;
		}
		std::string key; std::string value;
		size_t pos = line.find(delimiter);
		key = line.substr(0, pos);
		value = line.substr(pos + delimiter.length(), std::string::npos);
		try{
			if(!validateDate(key) || !ft_isnumber(value)){
				throw ("Error: bad input => " + key).c_str();
			}
			if(!is_num(value))
				throw "Error: invalid value";
			if(ft_stof(value) > 1000)
				throw "Error: too large a number.";
			if(ft_stof(value) < 0)
				throw "Error: not a positive number.";

			std::map<std::string, double>::iterator it = this->_db.upper_bound(key);
			if (it != this->_db.begin())
				--it;
			std::cout << key << " => " << value << " = " << (it->second	 * ft_stof(value))  << std::endl;
		}catch(char const *err){
			std::cerr << err << std::endl;
		}
	}
	input.close();
}

std::map<std::string, double> BitcoinExchange::getDB() const
{
	return (this->_db);
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if(this == &rhs)
		return *this;
	this->_db = rhs.getDB();
	return *this;
}

bool validateDate(std::string date)
{
	struct tm tm;
	bool ret = true;

	if(date.length() != 10)
		return false;
	if(date.empty())
		return false;
	if (std::sscanf(date.c_str(), "%d-%d-%d", &tm.tm_year, &tm.tm_mon, &tm.tm_mday) != 3)
		return false;
	if (!strptime(date.c_str(), "%Y-%m-%d", &tm))
		return false;
	if (tm.tm_year < 0 || tm.tm_mon < 0 || tm.tm_mday < 1 ||
		tm.tm_mon > 11 || tm.tm_mday > 31) 
		return false;
	return(ret);
}

bool validateValue(std::string value)
{
	bool ret = true;
	int temp;

	if(value.empty())
		ret = false;
	if(std::sscanf(value.c_str(), "%d", &temp) != 1)
		ret =false;
	return (ret);
}

float ft_stof(const std::string& str) {
	const char* charPtr = str.c_str();
	return (std::atof(charPtr));
}

bool is_num(std::string value)
{
	(void) value;
	return true;
}

bool ft_isnumber(const std::string& str) {
	if(str.length() == 0)
		return false;
	for(size_t i = 0; i < str.length(); i++)
	{
		if(!(str[i] > 47 && str[i] < 58) && str[i] != '.')
			return false;
	}
	return true;
}
