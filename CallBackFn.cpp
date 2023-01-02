#include <iostream>

using std ::cout;

void Increment(int value1, int value2)
{
    cout << "Incremented  "
         << value1 + value2 << "\n";
}

void Decrement(int value1, int value2)
{
    cout << "Decremented "
         << value1 - value2 << "\n";
}

void Operation(void (*Ptr)(int value1, int value2))
{
    (*Ptr)(4,3) ;
}

int main()
{
    Operation(&Increment);
    cout << "Increment is Done\n";
    Operation(&Decrement);
    cout << "Decrement is Done\n";
}
