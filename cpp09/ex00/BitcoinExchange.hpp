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
		BitcoinExchange(std::ifstream &input, std::ifstream &database);
		~BitcoinExchange(void);
		void parseDB(std::ifstream &fileData);
		void execute();
};

bool validateDate(std::string date);