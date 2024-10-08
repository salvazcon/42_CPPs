#include "Date.hpp"

const int Date::DaysMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::~Date()
{
    //std::cout << "Date Destructor called" << std::endl;
}

Date::Date( void ): year(0), month(0), day(0)
{
    //std::cout << "Date Constructor called" << std::endl;
}

Date::Date(std::string date) 
{
	if (date.length() != 10)
		throw ExceptionInvalidDate();
	for (int i = 0; i < 10; ++i) {
		if ((i == 4 || i == 7) && date[i] != '-')
            throw ExceptionInvalidDate();
		else if ((i != 4 && i != 7) && !isdigit(date[i]))
			throw ExceptionInvalidDate();
	}
	int _year = atoi(date.substr(0, 4).c_str());
	int _month = atoi(date.substr(5, 2).c_str());
	int _day = atoi(date.substr(8, 2).c_str());
	if (_month == 0 || _month > 12 || _day == 0 || _day > DaysMonth[_month - 1])
		throw ExceptionInvalidDate();		
	this->year = _year;
    this->month = _month;
    this->day = _day;
}

bool Date::operator<(const Date& other) const 
{
    if (this->year > other.year){
        return false;}
	if (this->year < other.year){
        return true;}
    if (this->month > other.month){
        return false;}
    if (this->month < other.month){
        return true;}
    return this->day < other.day;
}

std::ostream& operator<<(std::ostream& stout, const Date& Date)
{
	stout << Date.getYear() << "-" << Date.getMonth() << "-" << Date.getDay();
	return stout;
}

Date& Date::operator=(const Date &other)
{
	//std::cout << "Date copy assignment operator called" << std::endl;
    this->year = other.year;
    this->month = other.month;
    this->day = other.day;
	return *this;
}

Date::Date(const Date &cp)
{
	//std::cout << "Date copy constructor called" << std::endl;
	*this = cp;
}

int	Date::getDay() const
{
	return this->day;
}

int	Date::getMonth() const
{
	return this->month;
}

int	Date::getYear() const
{
	return this->year;
}