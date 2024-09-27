#include "BitcoinExchange.hpp"
#include "Date.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <map>

int fk_space(std::string str, int i, int size, int csv)
{
    while((i < size) && ((str[i] == 32) || (str[i] == csv)))
        i++;
    return i;
}

std::string* ft_parser_data(std::string str, int csv)
{
    int size = str.length();
    std::string* arr = new std::string[2];
    int i = 0;

    i = fk_space(str, i, size, csv);
    while((i < size) && (str[i] != 32) && (str[i] != csv))
    {
        arr[0] += str[i];
        i++;
    }
    i = fk_space(str, i, size, csv);
    while((i < size) && (str[i] != 32))
    {
        arr[1] += str[i];
        i++;
    }
    return arr;
}

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        std::cerr << "Arguments Error." << std::endl;
        return(1); 
    }
    std::ifstream	fd2(argv[1]);
    std::ifstream	fd1("./data.csv");
    if(!fd1.is_open() || !fd2.is_open())
    {
        std::cerr << "File Error." << std::endl;
        return 1;
    }
    std::string str;
    std::string* arr;
    std::map<std::string, std::string> BddMap;
    while (std::getline(fd1, str))
    {
        arr = ft_parser_data(str, 44); //44 -> ',' en ASCII. 124 -> '|'
        BddMap.insert(std::make_pair(arr[0], arr[1]));
        delete[] arr;
    }
    fd1.close();
    while (std::getline(fd2, str))
    {
        arr = ft_parser_data(str, 124); //44 -> ',' en ASCII. 124 -> '|'
        std::cout << "Primer dato: " << arr[0] << std::endl;
        std::cout << "Segundo dato: " << arr[1] << std::endl;
        delete[] arr;
    }
    fd2.close();
    return 0;
}
    /* Error:
    - Si esta vacio alguno de los valores
    - Valor valido
    - Fecha valida
    - Numero entre 0 y 10000
    */

//Por lo que parece tengo dos bases de datos a comparar, la que viene por arg y otra que ya viene establecida.
/*Debo hacer:

    - El parseo de los datos que llega por parametro.
    - Hacer el calculo de intercambio y mostrarlo.
    - Lo que se debe guardar en el programa es la base de datos de los diferentes precios.
*/
    