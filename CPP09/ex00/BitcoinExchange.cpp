#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "BitcoinExchange Destructor called" << std::endl;
    return ;
}

BitcoinExchange::BitcoinExchange( void )
{
    std::cout << "BitcoinExchange Constructor called" << std::endl;
    return ;
}

/* BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
    //(<-- Datos a copiar.)
	std::cout << "BitcoinExchange copy assignment operator called" << std::endl;
	return *this;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cp)
{
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
	*this = cp;
} */
