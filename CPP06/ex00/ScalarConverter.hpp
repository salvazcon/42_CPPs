#ifndef  SCALARCONVERTER_HPP
# define  SCALARCONVERTER_HPP

#include <cmath>    // Mierdas de mates
#include <string>   // String
#include <cstring>  // Char*
#include <climits>  // MAX & MIN
#include <iostream> // Files stuff

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
