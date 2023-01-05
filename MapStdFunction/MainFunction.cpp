#include <iostream>
#include "PushFunction.hpp"

int Feed()
{
    int value;
    std::cin >> value;
    std::cout << "OK" << std::endl;
    return value;
}

int main()
{
    Map Obj;
    
    int n = 4;
    int size = 0;

    std::cout << "Enter The Size Of The Vector\n";
    std::cin >> size;
    std::cout << "Enter " << size << " Values Of The Vector\n";
    // while ((size--) != 0)
    // {
    //     Obj.RegisterCallback(Feed);
    //     Obj.CallEveryone();
    // }
    Obj.RegisterCallback(Feed);

    Obj.CallEveryone();
}