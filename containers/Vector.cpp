#include <iostream>
#include <vector>
#include <iterator>
// std :: cout;
// std :: cin;
using namespace std;

vector<int> capture{10, 20, 30};

class VectorModifiers
{
public:
    void AddLast()
    {
        int value;
        cout << "Enter The Element To Be Added\n";
        cin >> value;
        capture.push_back(value);
        cout << "The Element Is Added\n";
    }
    auto DeleteLast()
    {
        auto deleted = *(capture.end() - 1);
        capture.pop_back();
        return deleted;
    }
    void Insert()
    {
        int value, position;
        cout << "Enter The Element To Be Inserted\n";
        cin >> value;
        cout << "Enter The Position\n";
        cin >> position;
        vector<int>::iterator i = capture.begin();

        capture.insert(capture.begin() + position, value);
        cout << "The Element Is Inserted\n";
    }

    void EraseFrom()
    {
        cout << "Enter The Element From Where To Be Deleted\n";
        int deleteFrom;
        cin >> deleteFrom;
        // capture.erase()
        //  Incomplete
        cout << "The Element Is Deleted\n";
    }

    void Clear()
    {
        capture.clear();
        cout << "All The Elements Are Deleted\n";
    }

    void ValuesAssign()
    {
        int count, value;
        cout << "Enter The Count\n";
        cin >> count;
        cout << "Enter The Element\n";
        cin >> value;
        capture.assign(count, value);
        cout << "Elements Are Assigned\n";
    }

    void Display()
    {
        for (int &i : capture)
        {
            cout << i << " ";
        }
        
        cout << endl;
    }
};

class VectorCapacity
{
public:
    int Size()
    {
        return capture.size();
    }

    void IsEmpty()
    {
        if (capture.empty() == 1)
        {
            cout << "Capture Vector Is Empty\n";
        }
        else
        {
            cout << "Capture Vector Is Not Empty\n";
        }
    }

    void Resize()
    {
        int size;
        cout << "Enter The New Size\n";
        cin >> size;
        capture.resize(size);
        cout << "The Specified Size Is Changed\n";
    }

    int Capacity()
    {
        return capture.capacity();
    }
};

int main()
{
    VectorModifiers vm;
    VectorCapacity vc;
    int n = 10;
    cout << "           LIST OF OPERATIONS " << endl;
    cout << " 1. Add Element At Last" << endl;
    cout << " 2. Delete Element At Last" << endl;
    cout << " 3. Insert Element At Position" << endl;
    cout << " 4. Delete Element At Value" << endl;
    cout << " 5. Vector Size" << endl;
    cout << " 6. Vector is Empty or Not" << endl;
    cout << " 7. Resize the Vector" << endl;
    cout << " 8. Assigning more values" << endl;
    cout << " 9. To Delete All the Elements In Vector" << endl;
    cout << " 10. Capacity Of The Vector " << endl;
    cout << " 11. Display Vector Elements" << endl;
    cout << " 12. Exit" << endl;
    while (n)
    {
        int choice;
        cout << endl
             << "Enter The Operation To Be Held" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
            vm.AddLast();
            break;
        case 2:
            cout << vm.DeleteLast() << " Is Deleted";
            break;
        case 3:
            vm.Insert();
            break;
        case 4:
            vm.EraseFrom();
            break;
        case 5:
            cout << "Size : " << vc.Size();
            break;
        case 6:
            vc.IsEmpty();
            break;
        case 7:
            vc.Resize();
            break;
        case 8:
            vm.ValuesAssign();
            break;
        case 9:
            vm.Clear();
            break;
        case 10:
            cout << "Capacity : " << vc.Capacity();
            break;
        case 11:
            vm.Display();
            break;
        case 12:
            n = 1;
        }
        n--;
    }
}
