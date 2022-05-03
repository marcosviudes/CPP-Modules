#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    //system("leaks Array");
    return 0;
}

/*
#include <iostream>
#include "Array.hpp"

class Awesome{
	public:
		int a;
		Awesome(void){ a = 1; };
};

std::ostream &operator<<( std::ostream & o, Awesome const &i)
{
    o << i.a << std::endl;
    return (o);
}

void patata(void){
	{	
		Array<Awesome>* hola = new Array<Awesome>(0);
		std::cout << (*hola)[1] << std::endl;
		delete hola;
		std::cout << "wtf" << std::endl;
	}
}

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;

	patata();
    system("leaks a.out");
	return 0;
}*/