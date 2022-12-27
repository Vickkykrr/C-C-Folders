#include <iostream>
#include <vector>
// std :: cout;
// std :: cin;
using namespace std;

class VectorModifiers
{
    int 
}

class VectorCapacity
{

}

int main()
{
    int n=5;
    while(n)
    {
        int choice;
        cout << " ENTER THE OPERATION" << endl;
        cout << " 1. Add Element At Last" <<endl;
        cout << " 2. Delete Element At Last" <<endl;
        cout << " 3. Insert Element At Begin" <<endl;
        cout << " 4. Delete Element At Value" <<endl;
        cout << " 5. Vector Size" <<endl;
        cout << " 6. Vector is Empty or Not" <<endl;
        cout << " 7. Resize the Vector" <<endl;
        cout << " 8. Assigning more values" <<endl;
        cout << " 9. To Delete All the Elements In Vector" <<endl;
        cout << " 10. Capacity Of The Vector " <<endl;


        cin >> choice;
        switch(choice)
        {
            case 1: AddLast();break;
            case 2: break;
            case 3: break;
            case 4: break;
            case 5: break;
            case 6: break;
            case 7: break;
            case 8: break;
            case 9: break;
            case 10: break;
            

        }
        n--;
    }
}
