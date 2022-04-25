#pragma once
#include <string>
#include <iostream>

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

		std::string	getName(void) const;
		int			getGrade(void) const;

		class GradeTooHighException: public std::exception
		{
			const char* what() const throw()
			{
				return "Grade Too High";
			}
		};

		class GradeTooLowException: public std::exception
		{
			const char* what() const throw()
			{
				return "Grade Too Low";
			}
		};
};
std::ostream &operator<<( std::ostream &o, Bureaucrat const &src);


