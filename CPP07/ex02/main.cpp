#include <iostream>
#include "Array.hpp"

//void leaks() { system("leaks array"); }

int main(int, char**)
{
    //atexit(leaks);
    Array<int> arr(10);
    int* num = new int[10];
    
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = i;
            num[i] = i;
        }
        Array<int> tmp = arr;
        Array<int> test(tmp);

        std::cout << std::endl;
        std::cout << "Arr size: " << arr.size() << std::endl;
        std::cout << "Tmp size: " << tmp.size() << std::endl;
        for (int i = 0; i < 10; i++)
            std::cout << "Arr: " << arr[i] << std::endl;
        for (int i = 0; i < 10; i++)
            std::cout << "Num: " << num[i] << std::endl;
        std::cout << std::endl;
    }
	
    std::cout << std::endl;

    {
        try
        {
            std::cout << arr[-1] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        return 0;
    }
}