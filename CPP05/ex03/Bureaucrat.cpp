#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(void): name("Nameless"), grade(150)
{
    std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name)
{
    std::cout << "Bureaucrat Constructor called" << std::endl;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cp): name(cp.name), grade(cp.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
    this->grade = other.grade;
	return *this;
}

std::ostream&  operator<<(std::ostream& out, const Bureaucrat &Obj)
{
    out << Obj.getName() << ", bureaucrat grade " << Obj.getGrade() << std::endl;
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

std::string    Bureaucrat::getName(void) const
{
    return this->name;
}

int    Bureaucrat::getGrade(void) const
{
    return this->grade;
}

void    Bureaucrat::signForm(AForm & Obj) const
{
    try {
		Obj.beSigned(*this);
		std::cout << this->name << " signed " << Obj.getName() << std::endl;
	} catch (const std::exception& e) {
		std::cout << this->name << " couldn't sign " << Obj.getName() << " because " << e.what() << std::endl;
	}
}

void    Bureaucrat::executeForm(AForm const & form)
{
    try{
        form.execute(*this);
        std::cout << this->name << " executed " << form.getName() << std::endl;
    } catch( const std::exception& e )
    {
        std::cout << this->name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}