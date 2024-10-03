#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Form a("form1", 200, 100);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try {
		Form a("form1", -2, 100);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try {
		Form a("form1", 100, 200);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try {
		Form a("form1", 100, -3);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	{
		Form f("Fifo", 100, 4);
		Bureaucrat a("Paco", 101);
		Bureaucrat b("Pepe", 99);
		std::cout << std::endl;
		std::cout << f;
		a.signForm(f);
		b.signForm(f);
		std::cout << f;
		b.signForm(f);
		std::cout << std::endl;
	}
}