#include <iostream>
#include <string>
#include <functional>

using std ::cout;
using std ::endl;
using std ::string;
using namespace std;

int main()
{
    int variable = 10, value = 20, size = 30;

    // auto NewFunction = [](int value, int size)
    std :: function<void()> NewFunction = [=]()
    {
        int result = 0;
        result = variable + size + value;
        cout << "Result : " << result << "\n";
        variable = result;
    };
    int sample = 100;
    NewFunction();
    cout << "Variable : " << variable << "\n";
}