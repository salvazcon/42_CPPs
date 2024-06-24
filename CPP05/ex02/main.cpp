#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	{
		AForm* b = new PresidentialPardonForm("mike");
		Bureaucrat a("Paco", 1);

		std::cout << *b << std::endl;
		b->execute(a);
		delete b;
		return 0;
	}
}