#include "AForm.hpp"

AForm::~AForm(void)
{
    std::cout << "Form Destructor called" << std::endl;
    return ;
}

AForm::AForm(void): name("Nameless"), sign(false), signGrade(150), execGrade(150)
{
    std::cout << "Form Constructor called" << std::endl;
    return ;
}

AForm::AForm(std::string _name, int _signGrade, int _execGrade): name(_name), sign(false), signGrade(_signGrade), execGrade(_execGrade)
{
    std::cout << "Form Constructor called" << std::endl;
    if (_signGrade < 1)
        throw AForm::GradeTooHighException();
    else if (_signGrade > 150)
        throw AForm::GradeTooLowException();
    if (_execGrade < 1)
        throw AForm::GradeTooHighException();
    else if (_execGrade > 150)
        throw AForm::GradeTooLowException();
    return ;
}

AForm::AForm(const AForm &cp): name(cp.name), sign(cp.sign), signGrade(cp.signGrade), execGrade(cp.execGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
	return ;
}

AForm& AForm::operator=(const AForm &other)
{
	std::cout << "Form copy assignment operator called" << std::endl;
    AForm::operator=(other);
    this->sign = other.sign;
	return *this;
}

std::ostream&  operator<<(std::ostream& out, const AForm &Obj)
{
    out << "Name: " << Obj.getName() << std::endl;
    out << "Signed: " << Obj.getSign() << std::endl;
    out << "Sign Grade: " << Obj.getSignGrade() << std::endl;
    out << "Exec Grade: " << Obj.getExecGrade() << std::endl;
    return (out);
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
