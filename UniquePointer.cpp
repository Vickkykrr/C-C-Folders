#include <iostream>
#include <memory>

using namespace std;

class Demo
{
public:
    int size;
    int value;

public:
    Demo(int s, int v)
    {
        size = s;
        value = v;
    }
};

int main()
{
    unique_ptr<Demo> pointer1(new Demo(10, 5));
    cout << pointer1->size << endl;
    cout << pointer1->value << endl;

    unique_ptr<Demo> pointer2;
pointer2 = move(pointer1);
    cout << pointer2->size << endl;
    cout << pointer2->value << endl;

}

