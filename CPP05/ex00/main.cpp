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

	try {
		Bureaucrat a("el cocas", 10);
		for (int i = 0; i < 10; i++) {
			a.incrementGrade();
		}
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;

	try {
		Bureaucrat a("sassy", 131);
		for (int i = 0; i < 20; i++) {
			a.decrementGrade();
		}
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;

	{
		Bureaucrat a("mingito", 100);
		Bureaucrat b(a);
		Bureaucrat c;
		c = a;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		b.incrementGrade();
		c.decrementGrade();
		std::cout << b << std::endl;
		std::cout << a << std::endl;
		std::cout << c << std::endl;
	}
}