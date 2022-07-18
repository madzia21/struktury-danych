#include <iostream>
#include "vector.hpp"
int main()
{
    Vector vector(5);
    vector.insert(8, 0);
    vector.insert(7, 1);
    vector.insert(6, 2);
    std::cout << vector.getItem(0);
    std::cout << vector.getItem(1);
    std::cout << vector.getItem(2);
}