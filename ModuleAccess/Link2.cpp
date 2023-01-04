#include <iostream>
#include "Link2.hpp"

void Access2 :: Swap(int a, int b)
{
    a = a + b;
    b = a + b;
    std :: cout << "A : " << a
         << "\nB : " << b;
}