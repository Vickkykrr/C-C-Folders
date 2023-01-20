#include <iostream>

void Increment(int value1, int value2)
{
    std :: cout << "Incremented  "
         << value1 + value2 << "\n";
}

void Decrement(int value1, int value2)
{
    std :: cout << "Decremented "
         << value1 - value2 << "\n";
}

void Operation(void (*Ptr)(int value1, int value2))
{
    (*Ptr)(4,3) ;
}

int main()
{
    Operation(&Increment);
    std :: cout << "Increment is Done\n";
    Operation(&Decrement);
    std :: cout << "Decrement is Done\n";
}
