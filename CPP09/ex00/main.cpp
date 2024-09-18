//#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>

std::string ft_parser_date(std::string str)
{
    int size = str.length();
    std::string temp;
    int i = 0;

    while((i < size) && (str[i] == 32))
        i++;
    while((i < size) && (str[i] != 32) && (str[i] != '|'))
    {
        temp += str[i];
        i++;
    }
    return temp;
}

std::string ft_parser_value(std::string str)
{
    int size = str.length();
    std::string temp;
    int i = 0;

    while((i < size) && (str[i] != '|'))
        i++;
    i++;
    while((i < size) && (str[i] == 32))
        i++;
    while((i < size) && (str[i] != 32))
    {
        temp += str[i];
        i++;
    }
    return temp;
}

    /* Error:
    - Si esta vacio alguno de los valores
    - Valor valido
    - Fecha valida
    - Numero entre 0 y 10000
    */

int main(int argc, char *argv[])
{
/*     std::map<int, int> CsvMap;
    std::map<int, int> BitMap */;

    if(argc < 2)
    {
        std::cerr << "Arguments Error." << std::endl;
        return(1); 
    }
    std::ifstream	fd(argv[1]);
    if(!fd.is_open())
    {
        std::cerr << "File Error." << std::endl;
        return 1;
    }
    std::string str;
    while (std::getline(fd, str))
    {
        std::cout << "Primer dato: " << ft_parser_data(str) << std::endl;
        std::cout << "Segundo dato: " << ft_parser_coin(str) << std::endl;
    }
    fd.close();
    return 0;
}

//Por lo que parece tengo dos bases de datos a comparar, la que viene por arg y otra que ya viene establecida.
/*Debo hacer:

    - El parseo de los datos que llega por parametro.
    - Hacer el calculo de intercambio y mostrarlo.
    - Lo que se debe guardar en el programa es la base de datos de los diferentes precios.
*/
    