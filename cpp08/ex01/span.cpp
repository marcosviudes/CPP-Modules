#include "span.hpp"
#include <string>
#include <iostream>

Span::Span(void)
{
	this->_N = 0;
	this->_count = 0;
	this->_span = std::vector<int>();
	std::cout << "Span Default Constructor called" << std::endl;
}

Span::Span(unsigned int n)
{
	this->_N = n;
	this->_count = 0;
	this->_span = std::vector<int>();
	std::cout << "Span Constructor called" << std::endl;
}

Span::Span( Span const &copy)
{
	std::cout << "Span Copy Constructor called" << std::endl;
	*this = copy;
}

Span &Span::operator=( Span const &rhs)
{
	this->_N = rhs._N;
	this->_count = rhs._count;
	this->_span = rhs._span;
	std::cout << "Span Assignment operator called" << std::endl;
	return *this;
}

void Span::addNumber(int num)
{
	if(this->_count < this->_N)
	{
		this->_span.push_back(num);
		this->_count++;
		return;
	}
	throw NoleftSpace();
}

int Span::shortestSpan(void) const
{
	return(0);
}

int Span::longestSpan(void) const
{
	std::vector<int> temp = this->_span;

//	std::sort(_span.begin, _span.end);
	const int num = (temp.begin - temp.end);
	return(num);
}

const char *Span::NoleftSpace::what() const throw() {
	return ("imposible to add value");
}

Span::~Span()
{
	std::cout << "Span Destructor called" << std::endl;
}