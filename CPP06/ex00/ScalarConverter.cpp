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
    void (other);
	std::cout << "ScalarConverter copy assignment operator called" << std::endl;
	return *this;
}

ScalarConverter::ScalarConverter(const ScalarConverter &cp)
{
	void (cp);
    std::cout << "ScalarConverter copy constructor called" << std::endl;
	//*this = cp;
}


