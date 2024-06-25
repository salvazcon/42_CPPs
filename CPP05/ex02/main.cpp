#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	{
		//AForm* a = new AForm();
		AForm* b = new PresidentialPardonForm("mike");
		Bureaucrat c("Paco", 5);

		std::cout << *b << std::endl;
		std::cout << c << std::endl;
		c.executeForm(*b);
		b->beSigned(c);
		c.executeForm(*b);
		c.decrementGrade();
		std::cout << c << std::endl;
		c.executeForm(*b);
		delete b;
		return 0;
	}
}