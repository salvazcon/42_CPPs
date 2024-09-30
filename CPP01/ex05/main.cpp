#include "Harl.hpp"

int main(int argv, char **argc)
{
    std::cout << "-----------------------------------------------" << std::endl;
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