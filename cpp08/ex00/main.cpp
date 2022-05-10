#include <vector>
#include <list>
#include <iostream>
#include "easyfind.hpp"

#define NUM_VALUES 10
int main(void)
{
	std::list<int> l;
	std::vector<int> v;

	srand(time(NULL));
	for(int i = 0; i < NUM_VALUES; i++){
		l.push_back((6 * i) + 1);
		v.push_back(i * 2);
	}
	try { easyfind(l, 1); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	try { easyfind(l, 2); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	try { easyfind(l, 3); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	try { easyfind(l, 5); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	return (0);
}