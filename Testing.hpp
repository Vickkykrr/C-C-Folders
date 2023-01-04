#include <iostream>
#include <vector>
#include <iterator>
#include <functional>

#pragma once

class Testing
{
private:
    std::vector<std::function<int()>> NewVector;

public:
    std::vector<std::function<int()>>::iterator loop;
    void RegisterCallback(std::function<int()> InputValues)
    {
        NewVector.push_back(InputValues);
    }

    void CallEveryone();
    
};
