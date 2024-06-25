#ifndef  ROBOTOMYREQUESTFORM_HPP
# define  ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
    protected:

    private:
        std::string target;
    
    public:
        ~RobotomyRequestForm(void);
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &cp);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
        std::string  getTarget(void);
        void    execute(Bureaucrat const & executor) const;
};

#endif
