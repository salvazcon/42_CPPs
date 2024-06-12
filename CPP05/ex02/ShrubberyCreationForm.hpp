#ifndef  SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>

class ShrubberyCreationForm
{
    protected:
    private:
    
    public:
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const ShrubberyCreationForm &cp);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
};

#endif
