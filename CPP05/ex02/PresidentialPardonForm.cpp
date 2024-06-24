#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( void ): AForm("Presidential Pardon", 25, 5),  target("Non-Target")
{
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string _target ): AForm("Presidential Pardon", 25, 5), target(_target)
{
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp): AForm(cp.getName(), 25, 5), target(cp.target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
    AForm::operator=(other);
    this->target = other.target;
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > 5)
        throw AForm::GradeTooLowException();
    if(this->getSign() != false)
        throw AForm::GradeTooLowException();
    std::cout << "Informs that " << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    return ;
}

std::string    PresidentialPardonForm::getTarget(void)
{
    return this->target;
}
