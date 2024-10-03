#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("juja", 200);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << std::endl;

	try {
		Bureaucrat a("pakillo", -10);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	{
		Bureaucrat a("mingito", 100);
		Bureaucrat b(a);
		Bureaucrat c;
		c = a;

		std::cout << std::endl;
		std::cout << a;
		std::cout << b;
		std::cout << c;
		b.incrementGrade();
		c.decrementGrade();
		std::cout << b;
		std::cout << a;
		std::cout << c << std::endl;
	}
}