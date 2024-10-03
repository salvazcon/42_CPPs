#ifndef  AFORM_HPP
# define  AFORM_HPP

#pragma once

#include "Bureaucrat.hpp"

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
		AForm& operator=(const AForm &other);
        AForm(const AForm &cp);
        std::string         getName(void) const;
        bool                getSign(void) const;
        int                 getExecGrade(void) const;
        int                 getSignGrade(void) const;
        void                beSigned(Bureaucrat const& Obj);
        virtual void        execute(Bureaucrat const& executor) const = 0;
    
        class GradeTooHighException: public std::exception 
        {
            virtual const char* what() const throw() 
            {
                return "Grade too high.";
            }
        };

        class GradeTooLowException: public std::exception 
        {
            virtual const char* what() const throw() 
            {
                return "Grade too low.";
            }
        };

        class AlreadySignedException: public std::exception {
            virtual const char* what() const throw() {
                return "Already signed.";
            }
        };

        class NotSignedException: public std::exception
        {
		    virtual const char* what() const throw()
            {
			    return "Not signed";
	        }
	    };
};

std::ostream&  operator<<(std::ostream &out, const AForm &Obj);

#endif
