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
	if (dynamic_cast<A*>(p))
    	std::cout << "A" << std::endl;
  	else if (dynamic_cast<B*>(p))
    	std::cout << "B" << std::endl;
  	else if (dynamic_cast<C*>(p))
   		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base &p)
{
    try {
		(void) dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	} catch (...) {}
	try {
		(void) dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	} catch (...) {}
	try {
		(void) dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	} catch (...) {}
	std::cout << "Unknown type" << std::endl;
}

int main() 
{
	srand(time(NULL));
	A a;
	B b;
	C c;
	Base *aux;

	identify(&a);
	identify(&b);
	identify(&c);
    std::cout << std::endl;
	identify(a);
	identify(b);
	identify(c);
	std::cout << std::endl;
	std::cout << "Random Tests: " << std::endl;
	for (int i = 0; i < 10; i++) {
		aux = generate();
		identify(*aux);
		delete aux;
	}
}