#include <iostream>
#include <array>
#include <string>

int main()
{
    const int size1 = 8, size2 = 3;

    std::array<int, size1> grp1;
    std::array<std::string, size2> grp2;

    std::cout << "Enter Grp1 Elements\n";
    for (int i = 0; i < size1; i++)
    {
        std::cout << "element" << i << " ";
        std::cin >> grp1.at(i);
    }

    std::cout << "\n  Grp1 Elements are \n";
    for (auto i = grp1.begin(); i < grp1.end(); i++)
    {
        std::cout << *i << " ";
    }

    grp1.fill(9);

    std::cout << "\n\n  Grp1 Elements after filling \n";
    for (auto i = grp1.begin(); i < grp1.end(); i++)
    {
        std::cout << *i << " ";
    }

    std::cout << "\nbegin : " << grp1.begin() << std::endl;
    std::cout << "end : " << grp1.end() << std::endl;
    std::cout << "front : " << grp1.front() << std::endl;
    std::cout << "back : " << grp1.back() << std::endl;
    std::cout << "size : " << grp1.size() << std::endl;
    std::cout << "sizeof : " << sizeof(grp1) << std::endl;
    std::cout << "max_size : " << grp1.max_size() << std::endl;
}