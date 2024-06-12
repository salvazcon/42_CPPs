#ifndef  PRESIDENTIALPARDONFORM_HPP
# define  PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    protected:
    private:
        std::string target;
    
    public:
        ~PresidentialPardonForm(void);
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        //PresidentialPardonForm(const PresidentialPardonForm &cp);
		//PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
        void    execute(Bureaucrat const & executor) const;
};

#endif
