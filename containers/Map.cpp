#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int key = 0;
    string value = "demo";
    map<int, string> MapTrial;
    for (int i = 0; i < 5; i++)
    {
        cin >> key >> value;
        MapTrial.insert(pair<int, string>(key, value));
    }
    // for(map<int,string> :: iterator i=MapTrial.begin();i!=MapTrial.end();i++)
    // cout << i->first << " " << i->second <<endl;
    for (auto i : MapTrial)
    {
        cout << i.first << "====" << i.second << endl;
    }
}
