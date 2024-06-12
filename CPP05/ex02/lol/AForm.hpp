#ifndef  AFORM_HPP
# define  AFORM_HPP

#include <iostream>
#include <string>

class AForm
{
    protected:
    private:
        const   std::string name;
        bool                sign;
        const   int         signGrade;
        const   int         execGrade;
		AForm& operator=(const AForm &other);

    public:
        virtual ~AForm(void);
        AForm(void);
        AForm(std::string _name, int _signGrade, int _execGrade);
        AForm(const AForm &cp);
        std::string         getName(void) const;
        bool                getSign(void) const;
        int                 getExecGrade(void) const;
        int                 getSignGrade(void) const;
        virtual void    execute(/* Bureaucrat const & executor */) const = 0;
    
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
