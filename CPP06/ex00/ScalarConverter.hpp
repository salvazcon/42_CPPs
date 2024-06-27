#ifndef  SCALARCONVERTER_HPP
# define  SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter
{
    protected:
    private:
    
    public:
        ~ScalarConverter(void);
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &cp);
		ScalarConverter& operator=(const ScalarConverter &other);
};

#endif
