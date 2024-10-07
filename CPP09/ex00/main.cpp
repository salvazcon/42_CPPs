#include "Bitcoin.hpp"
#include "Date.hpp"

int fk_space(std::string str, int i, int size, int csv)
{
    while((i < size) && ((str[i] == 32) || (str[i] == csv)))
        i++;
    return i;
}

std::vector<std::string> ft_parser_data(std::string str, int csv)
{
    int size = str.length();
    std::vector<std::string> arr(2);
    int i = 0;

    i = fk_space(str, i, size, csv);
    while((i < size) && (str[i] != 32) && (str[i] != csv))
    {
        arr[0] += str[i];
        i++;
    }
    i = fk_space(str, i, size, csv);
    while((i < size))
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
        std::cerr << "Error: Invalid Arguments." << std::endl;
        return(1); 
    }
    std::ifstream	fd2(argv[1]);
    std::ifstream	fd1("./data.csv");
    if(!fd1.is_open() || !fd2.is_open())
    {
        std::cerr << "Error: cannot open data file" << std::endl;
        return 1;
    }
    std::string str;
    std::map<Date, Bitcoin> BddMap;
    std::vector<std::string> arr;
    while (std::getline(fd1, str))
    {
        arr = ft_parser_data(str, 44);
        try {
            Date fecha1(arr[0]);
            Bitcoin coin1(arr[1], 0);
            BddMap.insert(std::make_pair(fecha1, coin1));
        }
        catch (const std::exception& e) {
		    std::cout << e.what() << std::endl;
        }
    }
    fd1.close();
    while (std::getline(fd2, str))
    {
        arr = ft_parser_data(str, 124);
        try {
            Date fecha2(arr[0]);
            Bitcoin coin2(arr[1], 1);
            std::map<Date, Bitcoin>::iterator it = BddMap.lower_bound(fecha2);
            std::cout << fecha2 << " => " << coin2 << " = " << 
            (it->second.getBitcoin() * coin2.getBitcoin()) << std::endl;
        }
        catch (const std::exception& e) {
		    std::cout << e.what() << std::endl;
        }
    }
    fd2.close();
    return 0;
}