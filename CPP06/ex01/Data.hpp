#ifndef  DATA_HPP
# define  DATA_HPP

#include <stdint.h>
#include <iostream>
#include <string>

class Data
{
    protected:
    private:
        int n;

    public:
        ~Data(void);
        Data(void);
        Data(int num);
        Data(const Data &cp);
		Data& operator=(const Data &other);
        int getN();
        void setN(int num);
};

#endif
