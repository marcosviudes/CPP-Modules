#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	{
		std::cout  << std::endl << "-----Test case: fail hight creation " << std::endl;
		try{
			Bureaucrat conrad("HermesConrad", 0);
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout  << std::endl << "-----Test case: fail low creation " << std::endl;
		try{
			Bureaucrat conrad("HermesConrad", 151);
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout  << std::endl << "-----Test case: increment decrement " << std::endl;
		Bureaucrat conrad("HermesConrad", 34);
		std::cout << conrad << std::endl;
		try
		{
			conrad.gradeIncrement(1);
			std::cout << conrad << std::endl;
			conrad.gradeDecrement(5);
			std::cout << conrad << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout  << std::endl << "-----Test case: max level increment" << std::endl;
		Bureaucrat conrad("HermesConrad", 1);
		std::cout << conrad << std::endl;
		try
		{
			conrad.gradeIncrement(2);
			std::cout << conrad << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout  << std::endl << "-----Test case: min level decrement" << std::endl;
		Bureaucrat conrad("HermesConrad", 150);
		std::cout << conrad << std::endl;
		try
		{
			conrad.gradeDecrement(2);
			std::cout << conrad << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return (0);
}