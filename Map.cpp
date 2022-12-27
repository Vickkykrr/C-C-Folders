#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int key;
    string value = "demo";
    map<int, string> Trial;
    for (int i = 0; i < 5; i++)
    {
        cin >> key >> value;
        Trial.insert(pair<int, string>(key, value));
    }
    // for(map<int,string> :: iterator i=Trial.begin();i!=Trial.end();i++)
    for (auto &i : Trial)
    {
        cout << i.first << "====" << i.second << endl;
    }
}
