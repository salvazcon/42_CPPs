#include "Serializer.hpp"

Serializer::~Serializer()
{
    std::cout << "Serializer Destructor called" << std::endl;
    return ;
}

Serializer::Serializer( void )
{
    std::cout << "Serializer Constructor called" << std::endl;
    return ;
}

Serializer& Serializer::operator=(const Serializer &other)
{
    (void)other;
	std::cout << "Serializer copy assignment operator called" << std::endl;
	return *this;
}

Serializer::Serializer(const Serializer &cp)
{
    (void)cp;
    std::cout << "Serializer copy constructor called" << std::endl;
	//*this = cp;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}
