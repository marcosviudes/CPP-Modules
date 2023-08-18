#include "RPN.hpp"

RPN::RPN(std::string input)
{
	int a;
	int b;
	int res;
	int num;

	if(input.empty())
		throw "empty input";
	for(size_t i = 0; i < input.size(); i++)
	{
		char c = input[i];
		if (c == '-' && input[i + 1] >= '0' && input[i + 1] <= '9'){
			num = ctoint(input[i + 1]) * -1;
			this->pila.push(num);
		}
		else if (c >= '0' && c <= '9') {
			num = ctoint(c);
			if(input[i + 1] != ' ' || ( i + 1 ) == input.size())
				throw "invalid input";
			this->pila.push(num);
		}
		else if (c == '+' ||c == '-' ||c == '*' ||c == '/' ){
			if(this->pila.empty()) a = this->getNum();
			if(this->pila.empty()) b = this->getNum();
			switch(c){
				case '+': res = a + b; break;
				case '-': res = a - b; break;
				case '*': res = a * b; break;
				case '/':{
					if (a == 0){ throw "imposible to divide by zero"; }
					else res = a / b; break;
				}
				default: throw "invalid operator";
			}
			this->pila.push(res);
		}
		else { throw "Invalid input"; }
	}
	if(pila.size() == 1) std::cout <<  this->pila.top() << std::endl;
	else throw "Error";
}

RPN::~RPN()
{
}

int RPN::getNum(void) {
	int ret = this->pila.top();
	this->pila.pop();
	return(ret);
}

int ctoint(char c)
{
	int ret = c - '0';
	return ret;
}