#pragma once
#include <iostream>
#include <stack>
#include <algorithm>
#include <list>

template <typename T>
class MutantStack: public std::list<T>
{
	private:
		/*Private variables*/
	public:
		MutantStack(void);
		MutantStack( MutantStack const &copy);
		~MutantStack();

		MutantStack &operator=( MutantStack const &rhs);
		//typdef std::stack<T>::
//		std::
};