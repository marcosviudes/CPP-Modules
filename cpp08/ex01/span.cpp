#include "span.hpp"
#include <string>
#include <iostream>
#include <algorithm>

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
	int num = INT32_MAX;
	if(this->_count < 2)
		throw Noenoughtvalues();

	std::vector<int> temp = this->_span;
	int toCompare = 0;
	for (std::size_t i = 0; i < temp.size(); i++){
		toCompare = temp[i];
		for (std::size_t  j= 0; j < temp.size(); j++){
			if(i != j && std::abs(toCompare - temp[j]) < num){
				std::cout << toCompare << " " << temp[j] << std::endl;
				num = std::abs(toCompare - temp[j]);
			}
		}
	}
	return(num);
}
/*
int Span::shortestSpan(void) const
{
	std::vector<int> temp = this->_span;

	std::sort(temp.begin(), temp.end());
	std::transform(temp.begin(), temp.rbegin(), temp.size(), );
}
*/


int Span::longestSpan(void) const
{
	std::vector<int> temp = this->_span;

	std::sort(temp.begin(), temp.end());
	const int num = ((*temp.rbegin()) - (*temp.begin()));
	return(num);
}

const char *Span::NoleftSpace::what() const throw() {
	return ("imposible to add value");
}

const char *Span::Noenoughtvalues::what() const throw() {
	return ("not enought values");
}

Span::~Span()
{
	std::cout << "Span Destructor called" << std::endl;
}
