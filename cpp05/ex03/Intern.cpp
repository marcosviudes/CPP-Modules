#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern( Intern const &copy)
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	*this = copy;
}

Intern &Intern::operator=( Intern const &rhs)
{
	(void)rhs;
	std::cout << "Intern Assignment operator called" << std::endl;
	return *this;
}

const char	*Intern::UnknownFormException::what() const throw() {
	return ("Error: unknown form type");
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form	*ret = NULL;
	int		i = 0;
	std::string type[NUM_FORMS] ={"shrubbery creation", "robotomy request", "presidential pardon"};

	for(i = 0; i < NUM_FORMS; i++)
		if(type[i] == name){
			std::cout << "Intern creates " << name << std::endl;
			break;
		}

	switch (i)
	{
	case 0:
		ret = new ShrubberyCreationForm(target);
		break;
	case 1:
		ret = new RobotomyRequestForm(target);
		break;
	case 2:
		ret = new PresidentialPardonForm(target);
		break;
	default:
		throw UnknownFormException();
		break;
	}
	return ret;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}