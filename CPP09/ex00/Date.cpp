#include "Date.hpp"

const int Date::DaysMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::~Date()
{
    std::cout << "Date Destructor called" << std::endl;
    return ;
}

Date::Date( void )
{
    std::cout << "Date Constructor called" << std::endl;
    return ;
}

Date::Date(std::string date) 
{
    int i = 0;

	if (date.length() != 10)
		throw ErrorDate();
	while(i < 10) 
    {
		if (i == 4 || i == 7) {
			if (date[i] != '-')
				throw ErrorDate();
		}
		else if (!isdigit(date[i]))
			throw ErrorDate();
        i++;
	}

	year = stoi(date.substr(0, 4));
	month = stoi(date.substr(5, 2));
	day = stoi(date.substr(8, 2));
    
	if (month == 0 || month > 12 || day == 0 | day > DaysMonth[month - 1])
		throw ErrorDate();
}

Date& Date::operator=(const Date &other)
{
    //(<-- Datos a copiar.)
	std::cout << "Date copy assignment operator called" << std::endl;
	return *this;
}

Date::Date(const Date &cp)
{
	std::cout << "Date copy constructor called" << std::endl;
	*this = cp;
}
