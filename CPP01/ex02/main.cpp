#include "iostream"


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "La dirección de memoria str " << &str << std::endl;
    std::cout << "La dirección de memoria stringPTR " << stringPTR << std::endl;
    std::cout << "La dirección de memoria stringREF " << &stringREF << std::endl;

    std::cout << "Valor str " << str << std::endl;
    std::cout << "Valor stringPTR " << *stringPTR << std::endl;
    std::cout << "Valor stringREF " << stringREF << std::endl;
} 