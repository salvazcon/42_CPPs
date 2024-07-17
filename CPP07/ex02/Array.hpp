#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
class Array 
{
    private:
        T*				arr;
        unsigned int	len;

    public:
        ~Array()
        {
            std::cout << "Array destructor called" << std::endl;
            delete[] arr;
        };

        Array(): arr(NULL), len(0)
        {
            std::cout << "Array default constructor called" << std::endl;
        };

        Array(unsigned int _len): arr(new T[_len]), len(_len)
        {
            std::cout << "Array params constructor called" << std::endl;
        };

        T& operator[](std::size_t idx) {
            if ((unsigned int) idx < len)
                return arr[idx];
            throw Array::InvalidIndexException();
        };

        Array& operator=(Array const &other)
        { 
            std::cout << "Array assignment operator called" << std::endl;
            this->arr = new T[other.len];
            for (unsigned int i = 0; i < other.len; i++)
                this->arr[i] = other.arr[i];
            this->len = other.len;
            return (*this);
        };

        Array(Array const& cp) 
        {
            std::cout << "Array copy constructor called" << std::endl;
            *this = cp;
        };

        unsigned int size() const 
        {
            return this->len; 
        }

        class InvalidIndexException: public std::exception {
            virtual const char* what() const throw() {
                return "Index is out of bounds";
            }
        };
};

#endif