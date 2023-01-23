#include <iostream>
#include <map>
#include <functional>

class Menu
{
    std::map<int, std::function<void()>> Map;

private:
    int flag = 0, choice = 0;
    int value1 = 0, value2 = 0;
    int count2 = 1;

public:
    Menu()
    {
        Map[1] = std::bind(&Menu::ReadInputValues, this);
        Map[2] = std::bind(&Menu::DisplayValues, this);
        Map[3] = std::bind(&Menu::ResetValues, this);
        Map[4] = std::bind(&Menu::Exit, this);
    }

    void Find()
    {
        Map[choice]();
    }
    void ReadInputValues()
    {
        while (count2 == 1)
        {
            std::cout << "1.Enter values ." << std::endl
                      << "2.Back" << std::endl;
            std::cout << "Enter operation to perform : ";
            std::cin >> choice;

            if (choice > 2)
            {
                std::cout << "Enter valid operation to perform\n";
            }
            else if (choice == 1)
            {
                InputValues();
            }
            else{
                count2=0;
            }
        }
    }

    void InputValues()
    {
        int count1 = 1;
        while (count1==1)
        {
            std::cout << "1. Enter value1 ." << std::endl
                      << "2. Enter value2 ." << std::endl
                      << "3. Back ." << std::endl;

            std::cout << "Enter choice for operation : ";
            std::cin >> choice;

            if (choice > 3)
            {
                std::cout << "Enter valid operation to perform\n";
            }
            else if (choice == 1)
            {
                std::cout << "Enter value1 = ";
                std::cin >> value1;
            }

            else if (choice == 2)
            {
                std::cout << "Enter value2 = ";
                std::cin >> value2;
            }

            else if (choice == 3)
            {
                count1 = 0;
            }
        }
    }

    void DisplayValues()
    {
        std::cout << "Value 1 = " << value1 << ".\n"
                  << "Value 2 = " << value2 << ".\n";
    }
    void ResetValues()
    {
        value1 = 0;
        value2 = 0;

        std::cout << "Values Are Reseted\n";
    }

    void Exit()
    {
        flag = 1;
    }

    void MainMenu()
    {
        int count = 0;
        while (flag == 0)
        {
            std ::cout << "Loop count" << count++ << std ::endl;
            std::cout << "1.Store data ." << std::endl
                      << "2.Display data ." << std::endl
                      << "3.Reset data ." << std::endl
                      << "4.Exit ." << std::endl;

            std::cout << "Enter operation to perform : ";
            std::cin >> choice;

            if (choice > 4)
            {
                std::cout << "Enter valid operation to perform\n";
            }
            else
            {
                Find();
            }
        }
    }
};

int main()
{

    Menu obj;
    obj.MainMenu();
}
