#include "Intern.hpp"

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}

Intern::Intern( void )
{
    std::cout << "Intern Constructor called" << std::endl;
}

Intern::Intern(const Intern &cp)
{
    (void) cp;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern &other)
{
    (void) other;
	std::cout << "Intern copy assignment operator called" << std::endl;
	return *this;
}

AForm* Intern::makeForm( std::string form, std::string target )
{
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int i = 0;
    int j = -1;

    while(i != 3)
    {
        if(forms[i++] == form)
        {
            j = i;
            std::cout << "Intern creates " << form << std::endl;
        }
    }
    switch(j)
    {
        case 1:
            return new ShrubberyCreationForm(target);
            break;
        case 2:
            return new RobotomyRequestForm(target);
            break;
        case 3:
            return new PresidentialPardonForm(target);
            break;
        default:
            std::cout << "Intern can not create " << form << ", does not exist" << std::endl;
            break;
    }
    return NULL;
}

