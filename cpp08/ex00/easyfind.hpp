#pragma once
#include <algorithm>

class Fail : public std::exception{
	const char* what() const throw(){
		return ("Can’t be found");
	}
};

template <typename T>
int easyfind(T cont, int i)
{
	if(std::find(cont.begin(), cont.end(), i) != cont.end()){
		std::cout << i << " found " << std::endl;
		return(1);
	}
	throw Fail();
}
