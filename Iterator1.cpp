#include <iostream>
#include <string>
#include <vector>
#include <iterator>

// using std :: cout;
// using std :: vector;
// using std :: iterator;

using namespace std;

int main()
{
    int array[5];

    vector<int> Demo = {2, 4, 6, 8, 10};
    //cout << address of demo;
    vector<int> Demo2 = {1, 3, 5, 7, 9};

    vector<int>::iterator Test1 = Demo.begin();
    
    auto l= next(Test1,2);
    cout << *l <<"\n";

    advance(Test1, 5);

    l= next(Test1,2);
    cout << *l << "\n";

    copy(Demo2.begin(), Demo2.end(), inserter(Demo, Test1));
    for(Test1=Demo.begin();Test1!=Demo.end();Test1++)
    {
        cout << *Test1 << " ";
    }
    // for (int i : Demo)
    // {
    //     cout << i << " ";
    // }
    // for(int &i : Demo)
    // {
    //     cout << i << " ";
    // }
}
