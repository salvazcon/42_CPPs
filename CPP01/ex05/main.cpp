#include "Harl.hpp"

int main(int argv, char **argc)
{
    Harl harl;

    if(argv != 2)
    {
        std::cout << "Invalid number of arguments." << std::endl;
        return 1;
    }
    harl.complain(argc[1]);
    return 0;
}