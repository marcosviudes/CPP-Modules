#include <iostream>
#include "span.hpp"

int main()
{
	Span sp = Span(5);
	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try{ sp.addNumber(14); } catch (std::exception &e) { std::cerr << e.what() << '\n'; }

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
