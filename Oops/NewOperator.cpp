#include <iostream>
using namespace std;

class Employee
{
    string employeeName;
    int employeeId;

public:
    void Employees(string employeeName, int employeeId)
    {
        this->employeeName = employeeName;
        this->employeeId = employeeId;
    }
    
    int FetchDetails()
    {
        return employeeId;
    }
};

int main()
{
    string employeeName = "Maithreyan";
    int employeeId = 1001;
    Employee *details = new Employee();
    details->Employees(employeeName, employeeId);
    cout << details->FetchDetails();
    delete (details);
}