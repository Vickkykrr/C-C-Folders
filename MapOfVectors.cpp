#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <unordered_map>

//using std ::cin;
using std ::cout;
using std ::endl;
using std ::iterator;
using std ::unordered_map;
using std ::string;
using std ::vector;
using std :: pair;
using std :: greater;
using namespace std;

int main()
{
    unordered_map<string,vector<int>> Map;

    // vector<int> v1{1, 2, 3, 4};
    // vector<int> v2{10, 20, 30};
    // vector<int> v3{5, 10, 15};

    // Map["104"] = v1;
    // Map["345"] = v2;
    // Map["267"] = v3;

    Map.insert(pair<string ,vector<int>>("104",{1,2,3,4}));
    Map.insert(pair<string ,vector<int>>("345",{10,20,30}));
    Map.insert(pair<string ,vector<int>>("267",{5,10,15}));

    unordered_map<string, vector<int>> ::iterator itrOfMap;
    vector<int>::iterator itrOfVector;

    for (itrOfMap = Map.begin(); itrOfMap != Map.end(); itrOfMap++)
    {
        cout <<"Values of the Key \"" << itrOfMap->first << "\" : ";
        for (itrOfVector = itrOfMap->second.begin(); itrOfVector != itrOfMap->second.end();itrOfVector++)
        {
            cout << *itrOfVector << " ";
        }
        cout << endl;
    }
}
