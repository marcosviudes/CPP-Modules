#pragma once
#include <stack>
#include <iostream>
#include <string>

class RPN{
	private:
		std::stack<int> pila;
		int getNum(void);
	public:
		RPN(std::string input);
		~RPN();
};

int ctoint(char c);
