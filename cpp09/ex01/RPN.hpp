#pragma once
#include <stack>
#include <iostream>
#include <string>

class RPN{
	private:
		std::stack<int> _pila;
		int getNum(void);
	public:
		RPN(std::string input);
		RPN( RPN const &copy);
		~RPN();

		std::stack<int> getPila(void) const;
		RPN &operator=(RPN const &rhs);
};

int ctoint(char c);

