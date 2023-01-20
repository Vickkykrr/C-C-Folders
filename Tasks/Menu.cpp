#include <iostream>
#include <map>
#include <vector>

std::map<int, std::vector<int>> Map;

std::map<int, std::vector<int>>::iterator mapitr;

auto mapitr = Map.begin();

std::vector<int> Group1;
std::vector<int> Group2;
std::vector<int> Group3;

int AssignValues()
{
    int value;
    std::cout << "Enter The Value\n";
    std::cin >> value;
}

int main()
{

    Map[1] = Group1;

    Group1 =  {AssignValues(),};

    while (1)
    {
        std::cout << "List Of Operations\n"
                  << "1. Store Values\n"
                  << "2. View Values\n"
                  << "3. Reset Values\n"
                  << "4. Exit\n\n";

        int choice = 0;

        std::cout << "Enter Any Operation\n";
        std::cin >> choice;

        auto mapitr = Map.begin();
        mapitr = Map.find(choice);

        mapitr->second();

        // if (choice == 4)
        // {
        //     break;
        // }
    }
}