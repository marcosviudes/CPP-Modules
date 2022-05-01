#include <string>
#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery", 145, 137)
{
	this->_target = target;
	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &copy): Form(copy)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &rhs)
{
	Form::operator=(rhs);
	std::cout << "ShrubberyCreationForm Assignment operator called" << std::endl;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream output;

	output.open(this->_target + "_shrubbery");
	if(!output.good())
	{
		output.close();
		return;
	}
	output << "                                                         ." << std::endl;
	output << "                                              .         ;  " << std::endl;
	output << "                 .              .              ;%     ;;   " << std::endl;
	output << "                   ,           ,                :;%  %;       ," << std::endl;
	output << "                    :         ;                   :;%;'     .," << std::endl;
	output << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	output << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	output << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	output << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	output << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	output << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	output << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	output << "                      `@%:.  :;%.         ;@@%;'" << std::endl;
	output << "                        `@%.  `;@%.      ;@@%;" << std::endl;
	output << "                          `@%%. `@%%    ;@@%;" << std::endl;
	output << "                            ;@%. :@%%  %@@%;" << std::endl;
	output << "                              %@bd%%%bd%%:;" << std::endl;
	output << "                                #@%%%%%:;;" << std::endl;
	output << "                                %@@%%%::;" << std::endl;
	output << "                                %@@@%(o);  . '" << std::endl;
	output << "                                %@@@o%;:(.,'" << std::endl;
	output << "                            `.. %@@@o%::;" << std::endl;
	output << "                               `)@@@o%::;" << std::endl;
	output << "                                %@@(o)::;" << std::endl;
	output << "                               .%@@@@%::;" << std::endl;
	output << "                               ;%@@@@%::;." << std::endl;
	output << "                              ;%@@@@%%:;;;." << std::endl;
	output << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}