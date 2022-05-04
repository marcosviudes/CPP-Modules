#pragma once

class Fail : public std::exception{
	const char* what() const throw(){
		return ("Can’t be found");
	}
};

template <typename T>
int easyfind(T param, int i)
{
	(void)i;
	throw fail;
}
