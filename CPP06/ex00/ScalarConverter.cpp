#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter( void )
{
    std::cout << "ScalarConverter Constructor called" << std::endl;
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
	if (c > 31 && c < 127 && isprint(c))
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
	float aux;
	if (std::modf(f, &aux) == 0.0f)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
}

void write_double(double d)
{
	double aux;
	if (std::modf(d, &aux) == 0.0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void Writer(double d, float f, int i)
{
	write_char(i);
	write_int(d);
	write_float(f);
	write_double(d);
}

static void Printer(char* str, int n)
{
	double  d;
	float   f;
	int     i;

	switch (n)
	{
		case 0:
			Writer(static_cast<double>(str[0]), static_cast<float>(str[0]), static_cast<int>(str[0]));
			break;
		case 1:
			i = atoi(str);
			Writer(static_cast<double>(i), static_cast<float>(i), i);
			break;
		case 2:
			f = strtof(str, NULL);
			Writer(static_cast<double>(f), f, static_cast<int>(f));
			break;
		case 3:
			d = strtod(str, NULL);
			Writer(d, static_cast<float>(d), static_cast<int>(d));
			break;
	}
}

static int Type(const std::string& str)
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
    int i = Type(str);
	if (i >= 0 && i <= 3)
		Printer(str, i);
	else if (i == 4)
		SpecialFloatPrinter(str);
	else if (i == 5)
		SpecialDoublePrinter(str);
	else
		std::cerr << "impossible conversion" << std::endl;
}

