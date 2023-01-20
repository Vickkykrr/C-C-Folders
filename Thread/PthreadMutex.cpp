#include <iostream>
#include <pthread.h>
#include <mutex>

std::mutex Locker;

void *Func(void *args)
{
    Locker.lock();

    static int num = 5, value = 10, count = 0;

    if (count == 0)
        std::cout << "\nExisting Values\nnum : " << num << "    value : " << value << std::endl;

    num = num + value;
    value = num - value;
    num = num - value;

    std::cout << "\nElements after " << ++count << "Swapping\n"
              << "num : " << num << "   value : " << value << std::endl;

    Locker.unlock();
    return 0;
}

int main()
{
    pthread_t thread1;
    pthread_t thread2;

    pthread_create(&thread1, NULL, Func, NULL);
    pthread_create(&thread2, NULL, Func, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
}
