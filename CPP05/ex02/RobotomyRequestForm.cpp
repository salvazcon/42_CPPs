#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( void )
{
    std::cout << "RobotomyRequestForm Constructor called" << std::endl;
    return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    //(<-- Datos a copiar.)
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = cp;
}
