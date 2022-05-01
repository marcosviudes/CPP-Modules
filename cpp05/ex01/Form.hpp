#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const		std::string _name;
		bool		_isSigned;
		const int	_gradeToSign;
		const int	_gradeToExec;
	public:
		Form(std::string name, int gradeToSign,int gradeToExec);
		Form( Form const &copy);
		~Form();

		Form &operator=( Form const &rhs);
		void beSigned(const Bureaucrat &signatory);

		std::string getName(void) const;
		bool			getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExec(void) const;

		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
};
std::ostream &operator<<( std::ostream &o, Form const &i);
