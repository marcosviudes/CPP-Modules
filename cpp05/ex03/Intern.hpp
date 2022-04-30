#pragma once
#include "Form.hpp"
#include <string>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#define NUM_FORMS 3
class Intern
{
	private:
		/*Private variables*/
	public:
		Intern(void);
		Intern( Intern const &copy);
		~Intern();

		Intern &operator=( Intern const &rhs);
		Form *makeForm(std::string name, std::string target);
		class UnknownFormException: public std::exception {
			virtual const char	*what() const throw();
		};
};
