#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter Destructor called" << std::endl;
    return ;
}

ScalarConverter::ScalarConverter( void )
{
    std::cout << "ScalarConverter Constructor called" << std::endl;
    return ;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    (void) other;
	std::cout << "ScalarConverter copy assignment operator called" << std::endl;
	return *this;
}

ScalarConverter::ScalarConverter(const ScalarConverter &cp)
{
	(void) cp;
    std::cout << "ScalarConverter copy constructor called" << std::endl;
	//*this = cp;
}

static int VarType(const std::string& str) {
	if (str.length() == 1 && !isdigit(static_cast<char>(str[0])))
		return 0;
	char *endlong;
    char *endflout;
	long num = strtol(str.c_str(), &endlong, 10);
	strtod(str.c_str(), &endflout);
    if ((strncmp(endflout, "f", 1) == 0) && (strncmp(endlong, ".", 1) == 0))
	    return 2;
    if ((!*endflout) && (strncmp(endlong, ".", 1) == 0))
    	return 3;
    if ((!*endlong) && (num <= INT_MAX) && (num >= INT_MIN))
        return 1;
    return -1;
}

void ScalarConverter::convert(char* str)
{
    int i = VarType(str);

    switch (i)
	{
	case 0:
		std::cerr << "char" << std::endl;
		break;
	case 1:
		std::cerr << "int" << std::endl;
		break;
	case 2:
		std::cerr << "float" << std::endl;
		break;
	case 3:
		std::cerr << "double" << std::endl;
		break;
	default:
		std::cerr << "impossible conversion" << std::endl;
		break;
	}
}

