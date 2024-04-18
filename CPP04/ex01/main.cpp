#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// void leaks() { system("leaks -q program");
int main()
{
	// atexit(leaks);
	std::cout << std::endl << std::endl;
	{
		Animal *test[10];

		for (int i = 0; i < 5; i++)
			test[i] = new Cat();
		for (int i = 5; i < 10; i++)
			test[i] = new Dog();
		for (int i = 0; i < 10; i++)
			delete test[i];
	}
	std::cout << std::endl << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
    return(0);
}