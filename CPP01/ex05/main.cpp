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
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "-->  Some examples so you can see how it works:" << std::endl;
	std::cout << "- DEBUG:" << std::endl;
	harl.complain("DEBUG");
	std::cout << "- INFO:" << std::endl;
	harl.complain("INFO");
	std::cout << "- WARNING:" << std::endl;
	harl.complain("WARNING");
	std::cout << "- ERROR:" << std::endl;
	harl.complain("ERROR");
	std::cout << "- INVALID INPUT:" << std::endl;
	harl.complain("WHATEVER");
    std::cout << "-----------------------------------------------" << std::endl;
    return 0;
}