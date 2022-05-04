#include <iostream>

template <typename T>
void	print(T const &input) {
	std::cout << input << std::endl;
}

int main(void) {
	int arri[] = {1, 2, 3, 4, 5, 6};
	float arrf[] = {1.1, 2.2, 3.14, 0, 4, 4, 44};
	std::string wtf[] = { "hola", "buenos", "dias"};

	::iter<int>(arri, 6, print);
	std::cout << std::endl;
	iter<float>(arrf, 7, print);
	std::cout << std::endl;
	iter<std::string>(wtf, 3, print);
}
