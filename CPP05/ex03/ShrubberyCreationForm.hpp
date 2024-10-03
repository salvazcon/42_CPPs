#ifndef  SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
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
        void    execute(Bureaucrat const & executor) const;
        std::string  getTarget(void);
};

#endif
