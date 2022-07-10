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
	std::cout << "Looking for 7 in l" << std::endl;
	try { easyfind(l, 2); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	try { easyfind(l, 7); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	try { easyfind(l, 11); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	try { easyfind(l, 15); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	std::cout << std::endl << "Looking for 2 in v" << std::endl;
	try { easyfind(v, 2); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	try { easyfind(v, 7); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	try { easyfind(v, 11); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	try { easyfind(v, 15); } catch(std::exception &e) { std::cerr << e.what() << '\n'; }
	return (0);
}