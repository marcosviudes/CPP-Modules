#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy)
{
	if(copy._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(copy._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &rhs)
{
	this->_grade = rhs.getGrade();
	std::cout << "Bureaucrat Assignment operator called" << std::endl;
	return *this;
}

void Bureaucrat::gradeIncrement(int value)
{
	if ((this->getGrade() - value) < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= value;
}

void Bureaucrat::gradeDecrement(int value)
{
	if ((this->getGrade() + value) > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += value;
}

void Bureaucrat::signForm(Form &form) const
{
	try{
		form.beSigned(*this);
	}
	catch (std::exception &e){
		std::cout << this->_name << " Cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form &form) const
{
	try{
		form.execute(*this);
	}
	catch (std::exception &e){
		std::cout << this->_name << " Cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

std::ostream &operator<<( std::ostream & o, Bureaucrat const &src)
{
	o << src.getName() << ", bureaucrat grade << " << src.getGrade();
	return (o);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}
