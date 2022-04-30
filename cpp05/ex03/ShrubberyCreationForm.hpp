#pragma once
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class ShrubberyCreationForm: public Form
{
	private:
		/*Private variables*/
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=( ShrubberyCreationForm const &rhs);
		void execute(Bureaucrat const &executor) const;
};
