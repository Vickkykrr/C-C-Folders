#include <iostream>
#include <thread>

void FirstThread(int loop)
{
    int num1 = 7, num2 = 5;

    while (loop--)
    {
        num1--;
        num2--;
    }
    std::cout << num1 + num2 << "\n 1st thread Function Executed\n";
}

void SecondThread(int iter)
{
    int count = 0;
    while (iter--)
    {
        count += 10;
    }
    std::cout << count << "\n 2nd thread Function Executed\n";
}

int main()
{
    // int startTime = high_resolution_clock::now();

    int iter = 3, loop = 100;
    std::thread Thread2(SecondThread, iter);
    
    std::thread Thread1(FirstThread, loop);
    
    Thread1.join();
    Thread2.join();

    std::cout << "All Operations Are Done\n";
}
