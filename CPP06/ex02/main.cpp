#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate()
{
	switch (rand() % 3) 
    {
        case(0):
            return new A();
        case(1):
            return new B();
        case(2):
            return new C();
	}
	return NULL;
}

void identify(Base *p) 
{
    (void) p;
    std::cout << "not done" << std::endl;
}

void identify(Base &p)
{
    (void) p;
    std::cout << "not done" << std::endl;
}

int main() 
{
	srand(time(NULL));
	A a;
	B b;
	C c;
	Base *aux;
	
	for (int i = 0; i < 10; i++) {
		aux = generate();
		identify(aux);
		delete aux;
	}

	Base base;
	
    std::cout << std::endl;
	identify(&a);
	identify(&b);
	identify(&c);
	identify(&base);
	std::cout << std::endl;
	identify(a);
	identify(b);
	identify(c);
	identify(base);
}