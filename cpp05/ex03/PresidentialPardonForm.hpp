#pragma once
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class PresidentialPardonForm: public Form
{
	private:
		/*Private variables*/
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const &copy);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=( PresidentialPardonForm const &rhs);
		void execute(Bureaucrat const & executor) const;
};

