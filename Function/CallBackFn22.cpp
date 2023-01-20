#include <iostream>

using std ::cout;

void Increment()
{
    cout << "Incremented \n";
     //    << value1 + value2;
};
// void Decrement(int value1, int value2)
// {
//     cout << "decremented \n"
//          << value1 - value2;
// 
void Operation(void (*Ptr)())
{
    Ptr();
};
int main()
{
    void (*Ptr)() = &Increment;
    Operation(Ptr);
    cout << "Increment is Done\n";
    // Operation(&Decrement);
    // cout << "Decrement is Done\n";
}