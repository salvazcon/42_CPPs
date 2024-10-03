#ifndef  INTERN_HPP
# define  INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    protected:
    
    private:
    
    public:
        ~Intern(void);
        Intern(void);
        Intern(const Intern &cp);
		Intern& operator=(const Intern &other);
        AForm* makeForm(std::string form, std::string target);
};

#endif
