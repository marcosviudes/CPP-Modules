#pragma once

template <typename T>
class Array
{
	private:
		T	array[];

	public:
		Array(void);
		Array(unsigned int n);
		Array( Array const &copy);
		~Array();

		Array &operator=( Array const &rhs);
		
};
std::ostream &operator<<( std::ostream &o, Array const &i);


#include "Array.hpp"
#include <string>
#include <iostream>

Array::Array(void)
{
	std::cout << "Array Default Constructor called" << std::endl;
}

Array::Array(/*args*/)
{
	std::cout << "Array Constructor called" << std::endl;
}

Array::Array( Array const &copy)
{
	std::cout << "Array Copy Constructor called" << std::endl;
	*this = copy;
}

Array &Array::operator=( Array const &rhs)
{
	std::cout << "Array Assignment operator called" << std::endl;
	return *this;
}

std::ostream &operator<<( std::ostream & o, Array const &i)
{
	o << std::endl;
	return (o);
}

Array::~Array()
{
	std::cout << "Array Destructor called" << std::endl;
}