#ifndef  ROBOTOMYREQUESTFORM_HPP
# define  ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>

class RobotomyRequestForm
{
    protected:
    private:
    
    public:
        ~RobotomyRequestForm(void);
        RobotomyRequestForm(void);
        RobotomyRequestForm(const RobotomyRequestForm &cp);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
};

#endif
