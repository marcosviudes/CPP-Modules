#pragma once
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int		_N;
		unsigned int		_count;
		std::vector<int>	_span;
	public:
		Span(void);
		Span(unsigned int n);
		Span( Span const &copy);
		~Span();

		Span &operator=( Span const &rhs);
		void addNumber(int num);
		int shortestSpan(void) const;
		int	longestSpan(void) const;

		class NoleftSpace: public std::exception{
			const char* what() const throw();
		};
		
		class Noenoughtvalues: public std::exception{
			const char* what() const throw();
		};
};
