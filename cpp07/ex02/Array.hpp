#pragma once

template <typename T>
class Array
{
	private:
		int		_n;
		T	*_array;
	public:
		Array(void){this->_array = NULL; _n = 0;};
		Array(unsigned int n){
			_array = new T [n];
			_n = n;
			};
		Array( Array const &copy){ *this = copy; };
		~Array(){delete[] _array;}//_array = NULL;};

		Array &operator=( Array const &rhs){
			for(int i = 0; i < this->_n; i++)
			{
				this->_array[i] = T(rhs._array[i]);
			}
			return *this;
		}

		T &operator[](int i){
			if( i < 0 || i >= this->_n)
					throw Array::incaccesibleArray();
			return(this->_array[i]);
		}
		int size(void){return(this->_n);}

		class incaccesibleArray : public std::exception
		{
			const char *what() const throw (){
				return "Inaccesible array"; 
			}
		};
};
//std::ostream &operator<<( std::ostream &o, Array const &i);

/*
#include "Array.hpp"
#include <string>
#include <iostream>

Array::Array(void)
{
	std::cout << "Array Default Constructor called" << std::endl;
}

Array::Array()
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
}*/