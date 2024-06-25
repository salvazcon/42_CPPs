#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	
	srand(time(0));
	{
		//AForm* a = new AForm();

		AForm* s = new ShrubberyCreationForm("steve");
		AForm* r = new RobotomyRequestForm("josh");
		AForm* p = new PresidentialPardonForm("mike");
		Bureaucrat b("Paco", 1);
	
		std::cout << std::endl << std::endl;
		//b.executeForm(*s); //Error
		b.signForm(*s);
		b.executeForm(*s);
		std::cout << std::endl << std::endl;
		//b.executeForm(*r); //Error
		b.signForm(*r);
		b.executeForm(*r);
		std::cout << std::endl << std::endl;
		//b.executeForm(*p); //Error
		b.signForm(*p);
		b.executeForm(*p);
		std::cout << std::endl << std::endl;
		
		delete s;
		delete r;
		delete p;
	}
}