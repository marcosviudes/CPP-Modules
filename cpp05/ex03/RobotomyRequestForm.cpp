#include "RobotomyRequestForm.hpp"
#include <string>
#include <random>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &copy): Form(copy)
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const &rhs)
{
	Form::operator=(rhs);
	std::cout << "RobotomyRequestForm Assignment operator called" << std::endl;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::srand(std::time(NULL));
	int random = rand() % 2;
	std::cout << "Drilling noises!!!" << std::endl;
	if (random)
		std::cout << this->_target << " , has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " , has not been robotomized" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}