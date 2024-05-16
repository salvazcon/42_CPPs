#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

// void leaks() { system("leaks -q program");
int main()
{
	// atexit(leaks);
	//Animal* meta = new Animal(); //Error
	Animal* j = new Dog();
	Animal* i = new Cat();

	//meta->makeSound(); //Error
	i->makeSound();
	j->makeSound();
	delete i;
	delete j;
	return 0;
}