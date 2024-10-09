//#include ".hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <vector>
#include <stack>
#include <list>
#include <cstdlib>
#include <algorithm>


int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        std::cerr << "Error: Invalid Arguments." << std::endl;
        return 1; 
    }

    int num;
    std::list<int> myList;
    for(int i = 0; i < argc; i++)
    {
        for(int j = 0; j < strlen(argv[1]); j++ )
        {
            if(!isdigit(argv[i][j]))
            {
                std::cout << "Err" << std::endl;
                return 1;
            }
        }
        num = atoi(argv[i]);
        if(std::find(myList.begin(), myList.end(), num) != myList.end())
        {
            std::cout << "Err" << std::endl;
            return 1;
        }
        myList.push_front(num);
    }
}