#ifndef  DATE_HPP
# define  DATE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

class Date
{
    protected:

    private:
        int year;
        int month;
        int day;
        static const int DaysMonth[12];

    public:
        ~Date(void);
        Date(void);
        Date(const Date &cp);
        Date(std::string date);
		Date& operator=(const Date &other);
        bool operator<(const Date& other) const;
        int getMonth() const;
        int getYear() const;
        int getDay() const;

        class ExceptionInvalidDate: public std::exception {
            virtual const char* what() const throw() {
                return "Error: bad input";
            }
        };
};

std::ostream& operator<<(std::ostream& stout, const Date& Date);

#endif
