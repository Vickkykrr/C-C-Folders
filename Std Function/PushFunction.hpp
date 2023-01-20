#include <iostream>
#include <vector>
#include <iterator>
#include <functional>
#include <map>

class Map
{
private:
    std::map<int, std::vector<std::function<int()>>> MapFn;

    std::map<int, std::vector<std::function<int()>>>::iterator itrMap;

     itr = itrMap.begin();

    std::vector<std::function<int()>> Vector1;
    std::vector<std::function<int()>> Vector2;
    std::vector<std::function<int()>> Vector3;
    std::vector<std::function<int()>> Vector4;

    std::vector<std::function<int()>>::iterator itrVector;

public:
    Map()
    {
        MapFn[1] = Vector1;
        MapFn[2] = Vector2;
        MapFn[3] = Vector3;
        MapFn[4] = Vector4;

        itrMap = MapFn.begin();
        std::cout << itrMap->second()
    }

    void RegisterCallback(std::function<int()> Function, int key)
    {
        for (itrMap = MapFn.begin(); itrMap != MapFn.end(); itrMap++)
        {
            if (itrMap->first == key)
            {
                itrMap->second.push_back(Function);
            }
        }
    }

    void CallEveryone(int key)
    {
        for (auto &mapItr : MapFn)
        {
        std::cout << mapItr.second;

            if (mapItr.first == key)
            {
                for (auto &vectorItr : mapItr.second)
                {
                    vectorItr();
                }
            }
        }
    }

    void GetValues(int key)
    {
        for (auto &mapItr : MapFn)
        {
            if (mapItr.first == key)
            {
                for (auto &vectorItr : mapItr.second)
                {
                    vectorItr();
                }
            }
        }
    }

    // void GetValues(int VectorSize)
    // {
    //     std::cout << "The Vector Values are : \n";
    //     for (auto &itr1 = MapFn.begin(); itr1 != MapFn.end(); itr1++)
    //     {
    //         itrVector = (itrMap)->second.begin();
    //         for (auto &itr2 = itrVector; itr2 != itrMap->second.end(); itr2++)
    //         {
    //             std::cout << (*itr2)();
    //         }
    //     }
    // }
};

// while ()
// {
//     while (temp--)
//     {
//         itrMap->second.push_back(Function);
//     }
//     itrMap++;
// }

// for (itrMap = MapFn.begin(); itrMap != MapFn.end(); itrMap++)
// {
//     std::cout << "Values of the Key \"" << itrMap->first << "\" : ";
//     for (auto itrVector = itrMap->second.begin(); itrVector != itrMap->second.end(); itrVector++)
//     {
//         std::cout << (itrVector) << " ";
//     }
//     std::cout << std::endl;
// }

// for (int itr1 = 0; itr1 < 4; itr1++)
// {
//     for (int itr2 = 0; itr2 < VectorSize; itr2++)
//     {
//         std::cout << arr[itr1][itr2] << " ";
//     }
//     std::cout << std::endl;
// }