#include <iostream>
#include <string>

using std ::cin;
using std ::cout;
using std ::string;

struct Details
{
    string name;
    int id;
    float salary;
    int attendancePercentage;
};

int main()
{
    struct Details staff;
    struct Details student;
    struct Details *Dstaff = &staff;
    struct Details *Dstudent = &student;

    cout << "Enter Staff Details\n";
    cin >> Dstaff->name >> Dstaff->id >> Dstaff->salary >> Dstaff->attendancePercentage;
    cout << Dstaff->name << " " << Dstaff->id << " " << Dstaff->salary << " " << Dstaff->attendancePercentage << "\n";

    cout << "Enter Student Details\n";
    cin >> Dstudent->name >> Dstudent->id >> Dstudent->salary >> Dstudent->attendancePercentage;
    cout << Dstudent->name << " " << Dstudent->id << " " << Dstudent->salary << " " << Dstudent->attendancePercentage << "\n";


}
