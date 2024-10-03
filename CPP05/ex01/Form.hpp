#ifndef  FORM_HPP
# define  FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    protected:
    
    private:
        const   std::string name;
        bool                sign;
        const   int         signGrade;
        const   int         execGrade;

    public:
        ~Form(void);
        Form(void);
        Form(std::string _name, int _signGrade, int _execGrade);
        Form(const Form &cp);
		Form& operator=(const Form &other);
        std::string         getName(void) const;
        bool                getSign(void) const;
        int                 getExecGrade(void) const;
        int                 getSignGrade(void) const;
        void                beSigned(const Bureaucrat &Obj);
    
        class GradeTooHighException: public std::exception {
            virtual const char* what() const throw() {
                return "Grade too high.";
            }
        };

        class GradeTooLowException: public std::exception {
            virtual const char* what() const throw() {
                return "Grade too low.";
            }
        };

        class AlreadySignedException: public std::exception {
            virtual const char* what() const throw() {
                return "Already signed.";
            }
        };
};

std::ostream&  operator<<(std::ostream &out, const Form &Obj);

#endif
