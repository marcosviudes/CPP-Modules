#pragma once

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

class PmergeMe
{
	private:
		std::vector<int> _input;
		std::deque<int> _input2;
	public:
		PmergeMe(void);
		PmergeMe(int argc, char **argv);
		PmergeMe( PmergeMe const &copy);
		~PmergeMe();

		PmergeMe &operator=( PmergeMe const &rhs);
		std::vector<std::pair <int, int> >	merge(std::vector<int>& arr );
		std::deque<std::pair <int, int> >	merge(std::deque<int>& arr);
		std::vector<int>	insertion(std::vector<std::pair <int, int> >& pares );
		std::deque<int>		insertion(std::deque<std::pair<int, int> >& pares);

		std::vector<int>	getVector(void) const;
		std::deque<int>		getDeque(void) const;

};

bool ft_isalnum(const char *str);
std::vector<std::pair <int, int> >	merge(std::vector<int>& arr );
std::deque<std::pair <int, int> >	merge(std::deque<int>& arr);
std::vector<int>	insertion(std::vector<std::pair <int, int> >& pares );
std::deque<int>		insertion(std::deque<std::pair<int, int> >& pares);