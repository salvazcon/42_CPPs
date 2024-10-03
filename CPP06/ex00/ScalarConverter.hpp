#ifndef  SCALARCONVERTER_HPP
# define  SCALARCONVERTER_HPP

#include <cmath>
#include <string>
#include <cstring>
#include <climits>
#include <iostream>

class ScalarConverter
{
    protected:
    
    private:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &cp);
    
    public:
        ~ScalarConverter(void);
		ScalarConverter& operator=(const ScalarConverter &other);
        static void convert(char* str);
};

#endif
