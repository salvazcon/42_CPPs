#ifndef  BITCOINEXCHANGE_HPP
# define  BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>

class BitcoinExchange
{
    protected:
    
    private:
    
      class DateError: public std::exception {
            virtual const char* what() const throw() {
                return "Not enough elements";
            }
        };

        class ValueEmpty: public std::exception {
            virtual const char* what() const throw() {
                return "Not enough elements";
            }
        };

        class ValueError: public std::exception {
            virtual const char* what() const throw() {
                return "Not enough elements";
            }
        };
    
    public:
        ~BitcoinExchange(void);
        BitcoinExchange(void);
        BitcoinExchange(const BitcoinExchange &cp);
		BitcoinExchange& operator=(const BitcoinExchange &other);
};

#endif
