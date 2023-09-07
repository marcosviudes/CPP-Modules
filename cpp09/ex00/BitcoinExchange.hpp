#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <stdlib.h>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _db;
	public:
		BitcoinExchange();
		BitcoinExchange(std::ifstream &database);
		BitcoinExchange(const BitcoinExchange &cpy);
		~BitcoinExchange(void);
		void parseDB(std::ifstream &fileData);
		void execute(std::ifstream &input);

		std::map<std::string, double> getDB(void) const;

		BitcoinExchange &operator=(const BitcoinExchange &rhs);
};

bool validateDate(std::string date);
float ft_stof(const std::string& str);
bool is_num(std::string value);
bool validateValue(std::string value);

bool ft_isnumber(const std::string& str);