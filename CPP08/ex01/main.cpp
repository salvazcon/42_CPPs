#include "Span.hpp"

int main( ) 
{
    {
        Span s(5);

        std::cout << std::endl;
        try {
            std::cout << s.longestSpan() << std::endl; 
        }
        catch(const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
        s.addNumber(1);
        s.addNumber(25);
        s.addNumber(7);
        s.addNumber(5);
        s.addNumber(2);
        try {
            s.addNumber(67);
        }
        catch(const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        s.writeSpan();
        std::cout << "Longest: " << s.longestSpan() << std::endl;
        std::cout << "Shortes: " << s.shortestSpan() << std::endl;
        std::cout << std::endl;

        Span a(s);
        a.writeSpan();
        std::cout << std::endl;

        Span b;
        b = s;
        b.writeSpan();
        std::cout << std::endl;
    }
    {
        Span s(10000);

        std::cout << std::endl;
        s.addNumbers(1, 75);
        s.writeSpan();
        std::cout << "Longest: " << s.longestSpan() << std::endl;
        std::cout << "Shortes: " << s.shortestSpan() << std::endl;
    }
    return 0;
}