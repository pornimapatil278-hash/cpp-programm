#include <iostream>
using namespace std;

class Employee
{
    int employeeId;
    string employeeName;
    float salary;
    string department;

public:
    void Input()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeId;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Salary: ";
        cin >> salary;

        cout << "Enter Department: ";
        cin >> department;
    }

    void Display()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Employee e;

    e.Input();
    e.Display();

    return 0;
}