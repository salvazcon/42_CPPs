#include "Span.hpp"

Span::~Span()
{
    std::cout << "Span Destructor called" << std::endl;
    return ;
}

Span::Span( void ): _size(0)
{
    std::cout << "Span Constructor called" << std::endl;
    return ;
}

Span::Span( unsigned int n ): _size(n)
{
    std::cout << "Span Constructor called" << std::endl;
    return ;
}

Span& Span::operator=(const Span &other)
{
    this->v = other.v;
    this->_size = other._size;
	std::cout << "Span copy assignment operator called" << std::endl;
	return *this;
}

Span::Span(const Span &cp)
{
	std::cout << "Span copy constructor called" << std::endl;
	*this = cp;
}

void Span::addNumber(int n)
{
	if (this->v.size() == _size)
		throw FullSpan();
    
	this->v.push_back(n);
}

void Span::addNumbers(int begin, int end) {
    while (begin <= end) {
        this->addNumber(begin);
        begin++;
    }
};

void Span::writeSpan( void )
{
    for (std::size_t i = 0; i < this->v.size(); ++i) 
    {
        std::cout << this->v[i] << " ";
    }
    std::cout << std::endl;
}

int Span::longestSpan()
{
    if (this->v.size() <= 1)
		throw InsufficientSpan();
    std::sort(this->v.begin(), this->v.end(), std::greater<int>());
	return(this->v[0] - this->v[v.size() - 1]);
}

int Span::shortestSpan()
{
	if (this->v.size() <= 1)
		throw InsufficientSpan();
    std::sort(this->v.begin(), this->v.end(), std::greater<int>());
    int n = this->v[0] - this->v[1];
    for (std::size_t i = 2; i < this->v.size(); ++i) 
    {
        if(n > (this->v[i] - this->v[i+1]))
            n = this->v[i] - this->v[i+1];
    }
    return (n);
}