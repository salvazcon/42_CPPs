#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm("Shrubbery Creation Form", 145, 137),  target("Non-Target")
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string _target ): AForm("Shrubbery Creation Form", 145, 137),  target(_target)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp): AForm(cp.getName(), 145, 137), target(cp.target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
    AForm::operator=(other);
    this->target = other.target;
	return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > 137)
        throw AForm::GradeTooLowException();
    if(this->getSign() == false)
        throw AForm::NotSignedException();
    std::string file_name = target + "_shrubbery";
	std::ofstream fd(file_name.c_str(), std::ofstream::trunc);
	if (fd)
    {
		fd << "   /*\\" << std::endl;
        fd << "  /***\\" << std::endl;
        fd << " /*****\\" << std::endl;
        fd << "/*******\\" << std::endl;
        fd << "---------" << std::endl;
        fd << "   ||" << std::endl;
        fd.close();
	}
	else
		std::cout << "Error with the file!!" << std::endl;
}

std::string    ShrubberyCreationForm::getTarget(void)
{
    return this->target;
}