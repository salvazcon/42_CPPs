#include <iostream>
#include <vector>
#include <list>
#include "Easyfind.hpp"

int main( void ) 
{
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    std::cout << easyFind(v, 20) << std::endl;

    std::list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    std::cout << easyFind(l, 30) << std::endl;

    std::list<int> aux;
    std::cout << easyFind(aux, 1) << std::endl;
    return 0;
}