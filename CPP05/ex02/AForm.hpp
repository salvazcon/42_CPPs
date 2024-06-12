#ifndef  AFORM_HPP
# define  AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

class Bureaucrat;

class AForm
{
    protected:
    private:
        const   std::string name;
        bool                sign;
        const   int         signGrade;
        const   int         execGrade;
    public:
        virtual ~AForm(void);
        AForm(void);
        AForm(std::string _name, int _signGrade, int _execGrade);
        AForm(const AForm &cp);
		AForm& operator=(const AForm &other); //Por que lo privatizan???
        std::string         getName(void) const;
        bool                getSign(void) const;
        int                 getExecGrade(void) const;
        int                 getSignGrade(void) const;
        void                beSigned(const Bureaucrat &Obj);
        virtual void        execute(Bureaucrat const & executor) const = 0;
    
        class GradeTooHighException: public std::exception 
        {
            virtual const char* what() const throw() 
            {
                return "Exception: The grade is too high.";
            }
        };

        class GradeTooLowException: public std::exception 
        {
            virtual const char* what() const throw() 
            {
                return "Exception: The grade is too low.";
            }
        };
};

std::ostream&  operator<<(std::ostream &out, const AForm &Obj);

#endif
