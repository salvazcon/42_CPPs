#ifndef  BUREAUCRAT_HPP
# define  BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    protected:
    
    private:
        const std::string name;
        int grade; 
    
    public:
        ~Bureaucrat(void);
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &cp);
		Bureaucrat& operator=(const Bureaucrat &other);
        const std::string       getName(void) const;
        int                     getGrade(void) const;
        void                    incrementGrade(void);
        void                    decrementGrade(void);

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
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat &Obj);

#endif
