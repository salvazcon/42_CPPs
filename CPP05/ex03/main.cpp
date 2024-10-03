#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	
	srand(time(0));
	{
		Intern tocorto;
		Bureaucrat b("Paco", 1);
	
        std::cout << std::endl << std::endl;
		AForm* s = tocorto.makeForm("shrubbery creation", "steve");
        std::cout << std::endl << std::endl;
		AForm* r = tocorto.makeForm("robotomy request", "josh");
        std::cout << std::endl << std::endl;
		AForm* p = tocorto.makeForm("presidential pardon", "mike");
        std::cout << std::endl << std::endl;
		tocorto.makeForm("patata", "mike");

		
		b.signForm(*s);
		b.executeForm(*s);
		b.signForm(*r);
		b.executeForm(*r);
		b.signForm(*p);
		b.executeForm(*p);
		std::cout << std::endl << std::endl;
		
		delete s;
		delete r;
		delete p;
	}
}