#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

	std::cout << "/ex00 TEST*************************" << std::endl;
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
	
	std::cout << std::endl;
	std::cout <<  "/ex01 TEST*************************" << std::endl;
	{
		std::cout  << std::endl << "-----Test case: Form sign" << std::endl;
		Bureaucrat	conrad("HermesConrad", 34);
		Form		sevpay("Fray's dismissal sheet", 3 , 12);
		std::cout << std::endl;
		std::cout << conrad << std::endl;

		conrad.signForm(sevpay);
		std::cout << sevpay << std::endl;
		conrad.gradeIncrement(33);
		std::cout << conrad << std::endl;
		conrad.signForm(sevpay);
		std::cout << std::endl;
	}
	return (0);
}
