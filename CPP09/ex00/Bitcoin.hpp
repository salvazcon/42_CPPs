#ifndef  BITCOIN_HPP
# define  BITCOIN_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

class Bitcoin
{
    protected:

    private:
        float bitcoin;
    
    public:
        ~Bitcoin(void);
        Bitcoin(void);
        Bitcoin(std::string bitcoin, int n);
        Bitcoin(const Bitcoin &cp);
		Bitcoin& operator=(const Bitcoin &other);
        float getBitcoin() const;

        class ExceptionInvalidNumber: public std::exception {
            virtual const char* what() const throw() {
                return "Error: invalid number.";
            }
        };

        class ExceptionNegativedNumber: public std::exception {
            virtual const char* what() const throw() {
                return "Error: not a positive number.";
            }
        };

        class ExceptionLargeNumber: public std::exception {
            virtual const char* what() const throw() {
                return "Error: too large a number.";
            }
        };
};

std::ostream& operator<<(std::ostream& stout, const Bitcoin& Bitcoin);

#endif
