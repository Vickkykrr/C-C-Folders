#include <iostream>
#include "Link1.hpp"

void Access1 ::Swap(int a, int b)
{
    a = a + 10;
    b = b + 10;
    std :: cout << "Swapped Elements" << std :: endl
         << " A : " << a
         << "\n B : " << b << std :: endl;
}
