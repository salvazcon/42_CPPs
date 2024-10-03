#ifndef  BUREAUCRAT_HPP
# define  BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    protected:
    
    private:
        const   std::string name;
        int     grade; 
    
    public:
        ~Bureaucrat(void);
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &cp);
		Bureaucrat& operator=(const Bureaucrat &other);
        std::string             getName(void) const;
        int                     getGrade(void) const;
        void                    incrementGrade(void);
        void                    decrementGrade(void);
        void                    signForm(Form &Obj) const;

        class GradeTooHighException: public std::exception {
            virtual const char* what() const throw() {
                return "Grade is too high.";
            }
        };

        class GradeTooLowException: public std::exception {
            virtual const char* what() const throw() {
                return "Grade is too low.";
            }
        };
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &Obj);

#endif
