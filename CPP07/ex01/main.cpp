#include "Iter.hpp"
#include <iostream>

void print_int(int a)
{
    std::cout << a << std::endl;
}

void print_str(std::string s)
{
    std::cout << s << std::endl;
}

int main( void ) 
{
    {
		int ari[] = {1, 2, 3, 4, 5};
		iter(ari, 5, print_int);
		std::string ars[] = {"hola", "adios", "hello kitty"};
		iter(ars, 3, print_str);
	}
}
