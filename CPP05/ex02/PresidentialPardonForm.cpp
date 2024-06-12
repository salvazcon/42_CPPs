#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( void ): target("Non-Target"), AForm("Presidential Pardon", 25, 5)
{
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string _target ): target(_target), AForm("Presidential Pardon", 25, 5)
{
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;
    return ;
}

/* PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp): target(cp.target), AForm(cp.FormPP)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
    this->FormPP = other.FormPP;
    this->target = other.target;
    return *this;
} */

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    std::cout << "Informs that " << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    return ;
}

