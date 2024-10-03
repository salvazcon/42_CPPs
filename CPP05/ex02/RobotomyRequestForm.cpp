#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("Robotomy Request Form", 72, 45),  target("Non-Target")
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string _target ): AForm("Robotomy Request Form", 72, 45),  target(_target)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp): AForm(cp.getName(), 72, 45), target(cp.target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
    AForm::operator=(other);
    this->target = other.target;
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > 45)
        throw AForm::GradeTooLowException();
    if(this->getSign() == false)
        throw AForm::NotSignedException();
    int i = rand();
	if (i % 2 == 0)
		std::cout << "Some drilling noises... " << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}

std::string    RobotomyRequestForm::getTarget(void)
{
    return this->target;
}