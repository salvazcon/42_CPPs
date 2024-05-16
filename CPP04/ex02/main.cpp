#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

// void leaks() { system("leaks -q program");
int main()
{
	// atexit(leaks);
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	meta->makeSound();
	i->makeSound();
	j->makeSound();
	return 0;
}