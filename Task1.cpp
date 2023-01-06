#include <iostream>
#include "Testing.hpp"

int InputValues()
{
    int value = 0;
    std::cin >> value;

    return value;
}

int main()
{
    Testing Test;

    int size = 0;

    std::cout << "Enter The Size\n";
    std::cin >> size;
    
    std::cout << "Enter " << size <<" Values\n";
    while ((size--) != 0)
    {
        Test.RegisterCallback(&InputValues);
    }  
    Test.CallEveryone();
}
