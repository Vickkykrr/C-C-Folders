#include <iostream>
#include "PushFunction.hpp"

int Feed()
{
    int value;
    std::cin >> value;
    return value
}

int main()
{
    Map Obj;

    int VectorSize = 0, VectorCount = 4;

    std::cout << "Enter The size of the Vector Values\n";
    std::cin >> VectorSize;

    while ((VectorCount--) != 0)
    {
        Obj.RegisterCallback(Feed);
        Obj.CallEveryone(VectorSize);
    }
    Obj.GetValues(VectorSize);
}