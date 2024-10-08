#include "Bitcoin.hpp"

Bitcoin::~Bitcoin()
{
    //std::cout << "Bitcoin destructor called" << std::endl;
}

Bitcoin::Bitcoin( void ): bitcoin(0)
{
    //std::cout << "Bitcoin constructor called" << std::endl;
}

Bitcoin::Bitcoin(std::string coin, int n)
{
    bool foundPoint = false;
    if(coin[0] == '-')
        throw ExceptionNegativedNumber();
    if (coin.empty())
        throw ExceptionInvalidNumber();
    for (size_t i = 0; i < coin.size(); ++i) 
    {
        if (!std::isdigit(static_cast<unsigned char>(coin[i])))
        {
            if (coin[i] == '.') {
                if (foundPoint)
                    throw ExceptionInvalidNumber();
                foundPoint = true;
            } else
                throw ExceptionInvalidNumber();
        }
    }

    float aux = static_cast<float>(atof(coin.c_str()));
    if(n == 1 && aux <= 1000 && aux >= 0 )
        this->bitcoin = aux;
    else if(n == 0)
        this->bitcoin = aux;
    else if(aux > 1000)
        throw ExceptionLargeNumber();
}


std::ostream& operator<<(std::ostream& stout, const Bitcoin& Bitcoin)
{
	stout << Bitcoin.getBitcoin();
	return stout;
}

Bitcoin& Bitcoin::operator=(const Bitcoin &other)
{
	//std::cout << "Bitcoin copy assignment operator called" << std::endl;
    this->bitcoin = other.bitcoin;
	return *this;
}

Bitcoin::Bitcoin(const Bitcoin &cp)
{
	//std::cout << "Bitcoin copy constructor called" << std::endl;
	*this = cp;
}

float	Bitcoin::getBitcoin() const
{
	return this->bitcoin;
}
