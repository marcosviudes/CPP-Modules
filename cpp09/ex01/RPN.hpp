#pragma once
#include <stack>
#include <iostream>
#include <string>

class RPN{
	private:
		std::stack<int> pila;
	public:
		RPN(std::string input);
		~RPN();
};