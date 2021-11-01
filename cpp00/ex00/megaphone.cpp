#include <iostream>

int	main(int argc, char **argv)
{
	int			i;
	size_t		j;

if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while(argv[i])
		{
			j = 0;
			std::string str(argv[i]);
			while(j < str.length())
			{
				std::cout << (char)std::toupper(str[j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
