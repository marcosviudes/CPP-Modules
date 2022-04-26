#pragma once
#include <string>
#include <iostream>

#define NUM_IDEAS 100

class Brain
{
	//protected:
	public:
		std::string ideas[NUM_IDEAS];
		Brain(void);
		Brain( Brain const &copy);
		~Brain();

		Brain &operator=( Brain const &rhs);
};
