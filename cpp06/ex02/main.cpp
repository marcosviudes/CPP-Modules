#include <iostream>
#include "Base.hpp"

Base *generate(void)
{
	std::srand(std::time(NULL));
	int randomNumber = std::rand() % 3 + 1;
	switch (randomNumber){
	case 1:
		return new A();
	case 2:
		return new B();
	default:
		return new C();
	}
}

void	identify(Base *p) {
	if (!p)
		return ;
	if (dynamic_cast<A *>(p))
		std::cout << "It's type A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "It's type B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "It's type C" << std::endl;
}

void	identify(Base &ref)
{
	try
	{
		A aux = dynamic_cast<A &>(ref);
		std::cout << "It's type A" << std::endl;
	}
	catch (...) {}
	try
	{
		B aux = dynamic_cast<B &>(ref);
		std::cout << "It's type B" << std::endl;
	}
	catch (...) {}
	try
	{
		C aux = dynamic_cast<C &>(ref);
		std::cout << "It's type C" << std::endl;
	}
	catch (...) {}
}

int main()
{
	Base *ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return(0);
}

