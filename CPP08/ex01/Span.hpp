#ifndef  SPAN_HPP
# define  SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

class Span
{
    protected:

    private:
        std::vector<int>	v;
        unsigned int        _size;

        class InsufficientSpan: public std::exception {
            virtual const char* what() const throw() {
                return "Not enough elements";
            }
        };

        class FullSpan: public std::exception {
            virtual const char* what() const throw() {
                return "The vector is full";
            }
        };

    public:
        ~Span(void);
        Span(void);
        Span(unsigned int n);
        Span(const Span &cp);
		Span& operator=(const Span &other);
        void addNumber(int n);
        void addNumbers(int begin, int end);
        void writeSpan(void);
        int longestSpan(void);
        int shortestSpan(void);
};

#endif
