#pragma once
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class RobotomyRequestForm: public Form
{
	private:
		/*Private variables*/
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const &copy);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=( RobotomyRequestForm const &rhs);
		void execute(Bureaucrat const &executor) const;
};

