#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.cpp"

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
	/*std::cout <<  "/ex01 TEST*************************" << std::endl;
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
	}*/
	std::cout <<  "/ex02 TEST*************************" << std::endl;
	{
		std::cout  << std::endl << "-----Test case: Execute form: Presidential" << std::endl;
		Bureaucrat				marvin("marvin", 34);
		PresidentialPardonForm	pardon("mviudes blackhole's");
		std::cout << marvin << std::endl;
		std::cout << pardon << std::endl;

		marvin.signForm(pardon);
		marvin.executeForm(pardon);
		std::cout << pardon << std::endl;
		std::cout << std::endl;
		marvin.gradeIncrement(10);
		std::cout << marvin << std::endl;
		marvin.signForm(pardon);
		marvin.executeForm(pardon);
		std::cout << std::endl;
	}
	{
		std::cout  << std::endl << "-----Test case: Execute form: Robotomy" << std::endl;
		Bureaucrat				marvin("marvin", 73);
		RobotomyRequestForm		robotomy("mviudes");
		std::cout << marvin << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << std::endl;

		marvin.signForm(robotomy);
		marvin.executeForm(robotomy);
		std::cout << std::endl;
		marvin.gradeIncrement(3);
		marvin.signForm(robotomy);
		marvin.executeForm(robotomy);
		std::cout << std::endl;
		marvin.gradeIncrement(25);
		marvin.signForm(robotomy);
		marvin.executeForm(robotomy);
		std::cout << std::endl;
	}
	{
		std::cout  << std::endl << "-----Test case: Execute form: shrubbery" << std::endl;
		Bureaucrat				marvin("marvin", 146);
		ShrubberyCreationForm		shrubbery("test");
		std::cout << marvin << std::endl;
		std::cout << shrubbery << std::endl;
		std::cout << std::endl;

		marvin.signForm(shrubbery);
		marvin.executeForm(shrubbery);
		std::cout << std::endl;
		marvin.gradeIncrement(3);
		marvin.signForm(shrubbery);
		marvin.executeForm(shrubbery);
		std::cout << std::endl;
		marvin.gradeIncrement(25);
		marvin.signForm(shrubbery);
		marvin.executeForm(shrubbery);
		std::cout << std::endl;
	}
	return (0);
}
