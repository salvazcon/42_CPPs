#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	{
		AForm* d = new PresidentialPardonForm("mike");
		AForm* b;
		b = d;
		//AForm p = PresidentialPardonForm("mike");
		//Bureaucrat b("Pako", 1); */
		std::cout << *d << std::endl;
		d->execute();
		std::cout << *b << std::endl;
		b->execute();
		delete d;
		return 0;
	}
}