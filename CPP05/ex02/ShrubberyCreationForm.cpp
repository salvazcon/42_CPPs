#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( void )
{
    std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    //(<-- Datos a copiar.)
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = cp;
}
