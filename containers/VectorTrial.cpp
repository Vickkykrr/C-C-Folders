#include <iostream>
#include <vector>

using namespace std;
int get()
{
    int value;
    cin >> value;
    return value;
}

int main()
{
    vector<int> value;
    value.push_back(1);
    value.push_back(2);
    cout << value.size() << endl;
    value.pop_back();
    value.push_back(3);

    for (int i = 2; i < 10; i++)
    {
        // int dummy;
        // cin >> dummy;
          value.push_back(get());
        
        //cin >> value[i];
    }
    for (int i = 0; i < value.size(); i++)
    {
        cout << value[i] << " ";
    }
    // value.clear();
    cout << endl; //<< value.size() << endl;
    value.resize((value.size()) + 2);
    for (int i = 0; i != value.size(); i++)
    {
        cout << value[i] << " ";
    }
    cout << endl;
    // value.insert(1,45);
    //  value.assign(3,100);
    value.resize(8);
    for (auto i = value.begin(); i != value.end(); i++)
    {
        cout << *i << " ";
    }
    value.clear();
    cout << endl << value.size() << endl;
}
