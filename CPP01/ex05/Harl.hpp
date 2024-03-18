#ifndef Harl_HPP
# define Harl_HPP

# include <fstream>
# include "iostream"
# include "string"

class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();

    public:
        Harl() {};
        ~Harl() {};
        void complain(std::string nivel);
};

#endif