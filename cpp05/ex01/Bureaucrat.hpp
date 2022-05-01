#pragma once
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const &copy);
		~Bureaucrat();

		Bureaucrat &operator=( Bureaucrat const &rhs);
		
		void	gradeIncrement(int value);
		void	gradeDecrement(int value);
		void	signForm(Form &form) const;

		std::string	getName(void) const;
		int			getGrade(void) const;

		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
};
std::ostream &operator<<( std::ostream &o, Bureaucrat const &src);
