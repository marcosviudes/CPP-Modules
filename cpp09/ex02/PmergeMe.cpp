#include "PmergeMe.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>


PmergeMe::PmergeMe(void){}


PmergeMe::PmergeMe(int argc, char **argv)
{
	if(argc < 1 || !argv[1])
		throw(std::runtime_error(("Invalid args, use: ./program [num1] [num2]...")));
	int i = 1;
	while(i < argc)
	{
		if(ft_isalnum(argv[i]) == false || argv[i] == '\0')
			throw std::runtime_error(("Invalid args, use: ./program [num1] [num2]..."));
			long int num = std::atoi(argv[i]);
			if(num < 0 || num > INT32_MAX)
				throw "Invalid args, use: ./program [num1] [num2]...";
			this->_input.push_back(num);
			this->_input2.push_back(num);
		i++;
	}
}

PmergeMe::PmergeMe( PmergeMe const &copy)
{
	*this = copy;
}

PmergeMe &PmergeMe::operator=( PmergeMe const &rhs)
{
	if (this != &rhs){
		this->_input = rhs._input;
		this->_input2 = rhs._input2;
	}
	return *this;
}

PmergeMe::~PmergeMe()
{
}

std::vector<std::pair <int, int> > 	PmergeMe::merge(std::vector<int>& arr )
{
	std::vector<std::pair <int, int> > pares;
	size_t size = _input.size();
	(void)arr;

	for( size_t i = 0; i < size; i += 2)
	{
		int first = _input[i];
		int second;
		if (i + 1 < size){
			second = _input[i + 1];
			if (second > first)
				std::swap(first, second);
		}
		else
			second = -1;
		std::pair<int, int> newPair(first, second);
		size_t insertPos = 0;
		while (insertPos < pares.size() && first > pares[insertPos].first)
			insertPos++;
		pares.insert(pares.begin() + insertPos, newPair);
	}
	return pares;
}

std::deque<std::pair <int, int> > PmergeMe::merge(std::deque<int>& arr) {
	std::deque<std::pair<int, int> > pares;
	size_t size = _input2.size();
	(void)arr;

	for (size_t i = 0; i < size; i += 2) {
		int first = _input2[i];
		int second = -1;
		if (i + 1 < size) {
			second = _input2[i + 1];
			if (second > first)
				std::swap(first, second);
		}
		std::pair<int, int> newPair(first, second);
		size_t insertPos = 0;
		while (insertPos < pares.size() && first > pares[insertPos].first)
			insertPos++;
		pares.insert(pares.begin() + insertPos, newPair);
	}
	return pares;
}

std::vector<int> PmergeMe::insertion(std::vector<std::pair <int, int> >& pares )
{
	std::vector<int> res;

	for (std::vector<std::pair<int, int> >::iterator it = pares.begin(); it != pares.end(); ++it) {
		res.push_back(it->first);
		if (it->second == -1)
			continue;

		size_t i = 0;
		while (i < res.size() && it->second > res[i])
			i++;
		std::vector<int>::iterator idx_pos = res.begin() + i;
		res.insert(idx_pos, it->second);
	}
	return res;
}

std::deque<int> PmergeMe::insertion(std::deque<std::pair<int, int> >& pares) {
	std::deque<int> res;

	for (std::deque<std::pair<int, int> >::iterator it = pares.begin(); it != pares.end(); ++it) {
		res.push_back(it->first);
		if (it->second == -1)
			continue;

		size_t i = 0;
		while (i < res.size() && it->second > res[i])
			i++;
		std::deque<int>::iterator idx_pos = res.begin() + i;
		res.insert(idx_pos, it->second);
	}
	return res;
}

bool ft_isalnum(const char *str)
{
	char *ptr = (char*)str;
	if(!str || *str == '\0')
		return false;
	while(*ptr != '\0'){
		if(*ptr < '0' || *ptr > '9')
			return false;
		ptr++;
	}
	return true;
}

std::vector<int> PmergeMe::getVector(void) const
{
	return(this->_input);
}

std::deque<int> PmergeMe::getDeque(void) const
{
	return(this->_input2);
}