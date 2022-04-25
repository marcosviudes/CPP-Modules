
#include <string>
#include <iostream>
#include "Form.hpp"

Form::Form(std::string name, int gradeToSign,int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	this->_isSigned = false;
	if (_gradeToExec < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (_gradeToExec > 150 || _gradeToSign > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form Constructor called" << std::endl;
}

Form::Form( Form const &copy) : _name(copy.getName()), _gradeToSign(copy.getGradeToSign()), _gradeToExec(copy.getGradeToExec())
{
	this->_isSigned = false;
	if (_gradeToExec < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (_gradeToExec > 150 || _gradeToSign > 150)
		throw Form::GradeTooLowException();
	*this = copy;
	std::cout << "Form Copy Constructor called" << std::endl;
}

Form &Form::operator=( Form const &rhs)
{
	this->_isSigned = rhs.getSigned();
	std::cout << "Form Assignment operator called" << std::endl;
	return *this;
}

void	Form::beSigned(const Bureaucrat &signatory)
{
	if(signatory.getGrade() > this->_gradeToSign)
		throw GradeTooHighException();
	this->_isSigned = true;
	std::cout << signatory.getName() << " signs " << this->_name << std::endl;
}

std::string		Form::getName(void) const
{
	return(this->_name);
}

bool		Form::getSigned(void) const
{
	return(this->_isSigned);
}

int		Form::getGradeToSign(void) const
{
	return(this->_gradeToSign);
}

int		Form::getGradeToExec(void) const
{
	return(this->_gradeToExec);
}

std::ostream &operator<<( std::ostream & o, Form const &i)
{
	o << "Form: " << i.getName();
	//i.getSigned = true? o << "is signed" : o << "isn't signed";
	o << (i.getSigned() == true? " is signed" : " isn't signed") << std::endl;
	o << "grade to sign: " << i.getGradeToSign() << std::endl;;
	o << "grade to execute: " << i.getGradeToExec() << std::endl;;
	return (o);
}

Form::~Form()
{
	std::cout <<"Form Destructor called" << std::endl;
}