#include "BitcoinExchange.hpp"
#include "Date.hpp"
#include <iostream>
#include <fstream>
#include <string>

int fk_space(std::string str, int i, int size)
{
    while((i < size) && ((str[i] == 32) || (str[i] == '|')))
        i++;
    return i;
}

std::string* ft_parser_data(std::string str)
{
    int size = str.length();
    static std::string arr[2];
    int i = 0;

    i = fk_space(str, i, size);
    while((i < size) && (str[i] != 32) && (str[i] != '|'))
    {
        arr[0] += str[i];
        i++;
    }
    i = fk_space(str, i, size);
    while((i < size) && (str[i] != 32))
    {
        arr[1] += str[i];
        i++;
    }
    return arr;
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
        std::string* arr = ft_parser_data(str);
        std::cout << "Primer dato: " << arr[0] << std::endl;
        std::cout << "Segundo dato: " << arr[1] << std::endl;
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
    