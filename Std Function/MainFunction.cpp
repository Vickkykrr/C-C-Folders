#include <iostream>
#include "PushFunction.hpp"

int Feed()
{
    int value = 0;
    std::cin >> value;

    

    // std::cout << "OK" << std::endl;
    //return value;
}

int main()
{
    Map Obj;

    int vectorSize = 0, vectorCount = 4;

    std::cout << "Enter The size of the Vector Values\n";
    std::cin >> vectorSize;

    Obj.RegisterCallback(Feed, 1);
    Obj.RegisterCallback(Feed, 2);
    Obj.RegisterCallback(Feed, 1);
    Obj.RegisterCallback(Feed, 1);

    //Obj.CallEveryone(2);

    // Obj.GetValues(vectorSize);
}