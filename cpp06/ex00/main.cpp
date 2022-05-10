#include <iostream>

void printint(double number, const char **argv)
{

	if (!strncmp(argv[1], "nan", 3) || !strncmp(argv[1], "inf", 3) 
	|| !strncmp(argv[1], "-inf", 4) || !strncmp(argv[1], "+inf", 3) 
	|| !strncmp(argv[1], "+inff", 3) || !strncmp(argv[1], "-inff", 3)
	|| !strncmp(argv[1], "nanf", 3) || !strncmp(argv[1], "inff", 3))
		std::cout << "int: impossible" << std::endl;
	else{
		if ((argv[1][0] < 48 || argv[1][0] > 57) && number == 0)
			number = static_cast<double>(argv[1][0]);
		if (number > INT_MAX || number < INT_MIN)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int> (number) << std::endl;
	}
}

void printchar(double number, const char **argv)
{
	if (!strncmp(argv[1], "nan", 3) || !strncmp(argv[1], "inf", 3) 
	|| !strncmp(argv[1], "-inf", 4) || !strncmp(argv[1], "+inf", 3) 
	|| !strncmp(argv[1], "+inff", 3) || !strncmp(argv[1], "-inff", 3)
	|| !strncmp(argv[1], "nanf", 3) || !strncmp(argv[1], "inff", 3))
		std::cout << "char: impossible" << std::endl;
	else{
		if((argv[1][0] < 48 || argv[1][0] > 57) && number == 0)
			number = static_cast<double>(argv[1][0]);
		if (number > 31 && number < 126)
			std::cout << "char: " << static_cast<char>(number) << std::endl;
		else
			std::cout << "char Non displayable" << std::endl;
	}
	return;
}

void printfloat(double number, const char **argv)
{
	if (!strncmp(argv[1], "nan", 3) || !strncmp(argv[1], "inf", 3) 
	|| !strncmp(argv[1], "-inf", 4) || !strncmp(argv[1], "+inf", 3) 
	|| !strncmp(argv[1], "+inff", 3) || !strncmp(argv[1], "-inff", 3)
	|| !strncmp(argv[1], "nanf", 3) || !strncmp(argv[1], "inff", 3))
		std::cout << "float: " << atof(argv[1])  << 'f' << std::endl;
	else{
		if ((argv[1][0] < 48 || argv[1][0] > 57) && number == 0)
			number = static_cast<double>(argv[1][0]);
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << "float: "<< static_cast<float>(number) << 'f' << std::endl;
	}
	return;
}

void printdouble(double number, const char **argv)
{
	std::cout << std::fixed;
	std::cout.precision(1);
	if ((argv[1][0] < 48 || argv[1][0] > 57) && number == 0)
		number = static_cast<double>(argv[1][0]);
	std::cout << "double: "<< number << std::endl; 
}

int main(int argc, char const *argv[])
{
	double number;

	if(argc != 2)
	{
		std::cout << "invalid args" << std::endl;
		return (1);
	}
	number = std::strtod(argv[1], NULL);
	printchar(number, argv);
	printint(number, argv);
	printfloat(number, argv);
	printdouble(number, argv);

	return 0;
}
