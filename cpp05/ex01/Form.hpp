#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

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
			const char* what() const throw()
			{
				return "Form Grade is Too High to sign";
			}
		};

		class GradeTooLowException: public std::exception
		{
			const char* what() const throw()
			{
				return "Form Grade is Too Low to sign";
			}
		};
};
std::ostream &operator<<( std::ostream &o, Form const &i);
