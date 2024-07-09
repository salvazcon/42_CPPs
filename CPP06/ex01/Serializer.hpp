#ifndef  SERIALIZER_HPP
# define  SERIALIZER_HPP

#include <stdint.h>
#include <iostream>
#include <string>
#include "Data.hpp"

class Serializer
{
    protected:
    private:
        Serializer(void);
        Serializer(const Serializer &cp);
    
    public:
        ~Serializer(void);
		Serializer& operator=(const Serializer &other);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
