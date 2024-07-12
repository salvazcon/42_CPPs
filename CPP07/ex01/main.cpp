#include "Iter.hpp"

int main( void ) 
{
    {
		int str[4];
		str[0] = 1;
		str[1] = 2;
        str[2] = 3;
		str[3] = 4;
		iter(str, 4, print<int>);
        
		const char *arr[4] = {"hola", "adios", "paco", "hello kitty"};
		iter(arr, 4, print<const char*>);
	}
}