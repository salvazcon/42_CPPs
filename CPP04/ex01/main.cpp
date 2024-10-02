#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
//#include <cstdlib> 

//void leaks() { system("leaks -q program"); }

int main()
{
	//atexit(leaks);
	std::cout << std::endl << std::endl;
	{
		//Animal* meta = new Animal(); //Error is pure.
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	{
		Animal *test[10];
		int x = 4;

        for (int i = 0; i < 5; i++)
            test[i] = new Cat();
        for (int i = 5; i < 10; i++)
            test[i] = new Dog();
        Brain *Btest = test[x]->getBrain();
		for (int i = 0; i < 20; i++)
			Btest->addIdea("hola");
		Btest->addIdea("adios");
		std::cout << std::endl << std::endl;
		std::cout << "Animal Class is a " << test[x]->getType() << std::endl;
        if (Btest)
            Btest->printIdeas();
		std::cout << std::endl << std::endl;
        for (int i = 0; i < 10; i++)
            delete test[i];
	}
    return(0);
}