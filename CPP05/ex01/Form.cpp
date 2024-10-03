#include "Form.hpp"

Form::~Form(void)
{
    std::cout << "Form destructor called" << std::endl;
}

Form::Form(void): name("Nameless"), sign(false), signGrade(150), execGrade(150)
{
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(std::string _name, int _signGrade, int _execGrade): name(_name), sign(false), signGrade(_signGrade), execGrade(_execGrade)
{
    std::cout << "Form constructor called" << std::endl;
    if (_signGrade < 1)
        throw Form::GradeTooHighException();
    else if (_signGrade > 150)
        throw Form::GradeTooLowException();
    if (_execGrade < 1)
        throw Form::GradeTooHighException();
    else if (_execGrade > 150)
        throw Form::GradeTooLowException();
}

Form& Form::operator=(const Form &other)
{
	std::cout << "Form copy assignment operator called" << std::endl;
    this->sign = other.sign;
	return *this;
}

Form::Form(const Form &cp): name(cp.name), sign(cp.sign), signGrade(cp.signGrade), execGrade(cp.execGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
}

std::ostream&  operator<<(std::ostream& out, const Form &Obj)
{
    out << "Name: " << Obj.getName();
    out << ", Signed: ";
    if(Obj.getSign())
        out << "True";
    else
        out << "False";
    out << ", Sign Grade: " << Obj.getSignGrade();
    out << ", Exec Grade: " << Obj.getExecGrade() << std::endl;
    return (out);
}

void    Form::beSigned(const Bureaucrat &Obj)
{
    if(Obj.getGrade() > this->signGrade)
        throw Form::GradeTooLowException();
    if(this->sign)
        throw Form::AlreadySignedException();
    this->sign = true;
}

std::string    Form::getName(void) const
{
    return this->name;
}

bool Form::getSign(void) const
{
    return this->sign;
}

int    Form::getExecGrade(void) const
{
    return this->execGrade;
}

int    Form::getSignGrade(void) const
{
    return this->signGrade;
}
