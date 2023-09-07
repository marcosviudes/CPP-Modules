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
			this->_pila.push(num);
			i++;
		}
		else if (c >= '0' && c <= '9'){
			num = ctoint(c);
			if(input[i + 1] != ' ' || ( i + 1 ) == input.size())
				throw "invalid input";
			this->_pila.push(num);
		}
		else if (c == '+' ||c == '-' || c == '*' ||c == '/' ) {
			if(!this->_pila.empty()) a = this->getNum();
			if(!this->_pila.empty()){
				b = this->getNum();
				switch(c){
					case '+': res = b + a; break;
					case '-': res = b - a; break;
					case '*': res = b * a; break;
					case '/':{
						if (a == 0){ throw "imposible to divide by zero"; }
						else res = b / a; break;
					}
					default: throw "invalid operator";
				}
			} else { throw "Invalid input"; }
			this->_pila.push(res);
		}
		else if(c != ' ')
			throw "invalid input";
	}
	if(_pila.size() == 1) std::cout <<  this->_pila.top() << std::endl;
	else throw "Error";
}

int RPN::getNum(void) {
	int ret = this->_pila.top();
	this->_pila.pop();
	return(ret);
}

int ctoint(char c)
{
	int ret = c - '0';
	return ret;
}

RPN::RPN( RPN const &copy)
{
	std::cout << "RPN Copy Constructor called" << std::endl;
	*this = copy;
}

RPN &RPN::operator=( RPN const &rhs)
{
	this->_pila = rhs.getPila();
	return *this;
}

RPN::~RPN()
{
}

std::stack<int> RPN::getPila(void) const
{
	return (this->_pila);
}