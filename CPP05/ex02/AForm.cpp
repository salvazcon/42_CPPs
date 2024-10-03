#include "AForm.hpp"

AForm::~AForm(void)
{
    std::cout << "Form destructor called" << std::endl;
}

AForm::AForm(void): name("Nameless"), sign(false), signGrade(150), execGrade(150)
{
    std::cout << "Form constructor called" << std::endl;
}

AForm::AForm(std::string _name, int _signGrade, int _execGrade): name(_name), sign(false), signGrade(_signGrade), execGrade(_execGrade)
{
    std::cout << "Form constructor called" << std::endl;
    if (_signGrade < 1)
        throw AForm::GradeTooHighException();
    else if (_signGrade > 150)
        throw AForm::GradeTooLowException();
    if (_execGrade < 1)
        throw AForm::GradeTooHighException();
    else if (_execGrade > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &cp): name(cp.name), sign(cp.sign), signGrade(cp.signGrade), execGrade(cp.execGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm &other)
{
	std::cout << "Form copy assignment operator called" << std::endl;
    this->sign = other.sign;
	return *this;
}

std::ostream&  operator<<(std::ostream& out, const AForm &Obj)
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

void    AForm::beSigned(Bureaucrat const & Obj)
{
    if(Obj.getGrade() > this->signGrade)
        throw AForm::GradeTooLowException();
    if(this->sign)
        throw AForm::AlreadySignedException();
    this->sign = true;
}

std::string    AForm::getName(void) const
{
    return this->name;
}

bool AForm::getSign(void) const
{
    return this->sign;
}

int    AForm::getExecGrade(void) const
{
    return this->execGrade;
}

int    AForm::getSignGrade(void) const
{
    return this->signGrade;
}
