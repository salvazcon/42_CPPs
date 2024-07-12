#ifndef  ITER_HPP
# define  ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T a, T b) {
    T aux = a;
    a = b;
    b = aux;
}

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T min(T a, T b) {
    return (a < b) ? a : b;
}

class Iter
{
    protected:
    private:
    public:
};

#endif
