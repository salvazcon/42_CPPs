#include <iostream>
#include <vector>
#include "Span.hpp"

int main( ) 
{
    {
        Span s(5);

        s.addNumber(1);
        s.addNumber(25);
        s.addNumber(7);
        s.addNumber(5);
        s.addNumber(2);
        s.writeSpan();
        std::cout << "Longest:" << s.longestSpan() << std::endl;
        std::cout << "Shortes:" << s.shortestSpan() << std::endl;


        Span a(s);
        a.writeSpan();
        Span b;
        b = s;
        b.writeSpan();
    }
    {
        Span s(10000);

        s.addNumbers(1, 10000);
        s.writeSpan();
        std::cout << "Longest:" << s.longestSpan() << std::endl;
        std::cout << "Shortes:" << s.shortestSpan() << std::endl;
    }
    return 0;
}