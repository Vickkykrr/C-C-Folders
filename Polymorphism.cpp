// POLYMORPHISM => Method Overloading
#include <iostream>
using namespace std;
class polymorphism
{
public:
    void func(int number1, int number2)
    {
        int addResult = number1 + number2;
        cout << addResult << endl;
    }

public:
    void func(int number1, int number2, int number3)
    {
        int subResult = number1 - number2 - number3;
        cout << subResult << " ";
    }
};

int main()
{
    polymorphism demo;
    demo.func(3, 2, 1);
    demo.func(1, 2);
    return 0;
}
