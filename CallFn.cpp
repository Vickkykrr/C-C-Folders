#include "Testing.hpp"

void Testing ::CallEveryone()
{
    int array[4] = {0};
    int iter = 0;
    
    for (loop = NewVector.begin(); loop != NewVector.end(); loop++)
    {
        array[iter] = (*loop)();
        iter++; 
    }

    std::cout << "The Values Are : ";

    for(int i=0;i<iter;i++)
    {
        std::cout << array[i] << " ";
    }
}