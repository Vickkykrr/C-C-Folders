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
    std :: function<void(int, int)> NewFunction = [&](int value, int size)
    {
        int result = 0;
        result = variable + size + value;
        cout << "Result : " << result << "\n";
        variable = result;
    };
    int sample = 100;
    NewFunction(value, size);
    cout << "Variable : " << variable << "\n";
}