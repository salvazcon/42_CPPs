#ifndef  DATE_HPP
# define  DATE_HPP

#include <iostream>
#include <string>

class Date
{
    protected:

    private:
        int year;
        int month;
        int day;

        class ErrorDate: public std::exception {
            virtual const char* what() const throw() {
                return "Error: Invalid Date";
            }
        };

    public:
        ~Date(void);
        Date(void);
        Date(const Date &cp);
		Date& operator=(const Date &other);
};

#endif
