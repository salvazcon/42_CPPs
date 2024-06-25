#ifndef  SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <fstream>
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm 
{
    protected:

    private:
        std::string target;
    
    public:
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &cp);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
        std::string  getTarget(void);
        void    execute(Bureaucrat const & executor) const;
};

#endif
