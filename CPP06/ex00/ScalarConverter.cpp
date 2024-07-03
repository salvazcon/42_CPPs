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

void SpecialFloatPrinter(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible"  << std::endl;
	std::cout << "float: " << str << std::endl;
	std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
}

void SpecialDoublePrinter(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
}

void write_char(int c)
{
	if (c > 32 && c < 127 && isprint(c))
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	else
		std::cout << "char: Not displayable" << std::endl;
}

void write_int(double d)
{
    if (d >= INT_MIN && d <= INT_MAX)
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void write_float(float f)
{
	std::cout.precision(10);
	if (f - floorf(f) == 0)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
}

void write_double(double d)
{
	std::cout.precision(10);
	if (d - floorf(d) == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void charPrinter(std::string str)
{
	double	d;
	float	f;
	int		i;

	i = static_cast<int>(str[0]);
	f = static_cast<float>(str[0]);
	d = static_cast<double>(str[0]);

	write_char(i);
	write_int(d);
	write_float(f);
	write_double(d);
}

static void intPrinter(std::string str) 
{
	double  d;
	float   f;
	int     i;

	i = atoi(str.c_str());
	f = static_cast<float>(i);
	d = static_cast<double>(i);
	
	write_char(i);
	write_int(d);
	write_float(f);
	write_double(d);
}

static void floatPrinter(std::string str) 
{
	double  d;
	float   f;
	int     i;

	f = strtof(str.c_str(), NULL);
	d = static_cast<double>(f);
	i = static_cast<int>(f);
	
	write_char(i);
	write_int(d);
	write_float(f);
	write_double(d);
}

static void doublePrinter(std::string str) 
{
	double  d;
	float   f;
	int     i;

	d = strtod(str.c_str(), NULL);
	f = static_cast<float>(d);
	i = static_cast<int>(d);
	
	write_char(i);
	write_int(d);
	write_float(f);
	write_double(d);
}

static int VarType(const std::string& str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return 4;
	if (str == "-inf" || str == "+inf" || str == "nan")
		return 5;
	if (str.length() == 1 && !isdigit(static_cast<char>(str[0])))
		return 0;
	char *end;
	long num = strtol(str.c_str(), &end, 10);
	if (!*end && num <= INT_MAX && num >= INT_MIN)
		return 1;
	strtod(str.c_str(), &end);
	if (!*end)
		return 3;
	if (strcmp(end, "f") == 0)
		return 2;
	return -1;
}

void ScalarConverter::convert(char* str)
{
    int i = VarType(str);
    switch (i)
	{
	case 0:
		charPrinter(str);
		break;
	case 1:
		intPrinter(str);
		break;
	case 2:
		floatPrinter(str);
		break;
	case 3:
		doublePrinter(str);
		break;
	case 4:
		SpecialFloatPrinter(str);
		break;
	case 5:
		SpecialDoublePrinter(str);
		break;
	default:
		std::cerr << "impossible conversion" << std::endl;
		break;
	}
}

