#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(void): name("Nameless"), grade(150)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = _grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
    this->grade = other.grade;
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cp): name(cp.name), grade(cp.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

std::ostream&  operator<<(std::ostream& out, const Bureaucrat &Obj)
{
    out << Obj.getName() << ", bureaucrat grade " << Obj.getGrade() << "." << std::endl;
    return (out);
}

void    Bureaucrat::incrementGrade(void)
{
    if( grade == 1 )
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::decrementGrade(void)
{
    if( grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

const std::string    Bureaucrat::getName(void) const
{
    return this->name;
}

int    Bureaucrat::getGrade(void) const
{
    return this->grade;
}
