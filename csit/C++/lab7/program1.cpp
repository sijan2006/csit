/*
1. Create a class Employee with data member's name, and salary. Write appropriate member functions to initialize and to display data members.
 Calculate average salary of 10 employees using friend function.
*/
#include <iostream>
using namespace std;

class Employee
{
    string name;
    float salary;

public:
    void setData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData()
    {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }

    float getSalary()
    {
        return salary;
    }

    friend float averageSalary(Employee emp[]);
};

float averageSalary(Employee emp[])
{
    float sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += emp[i].salary;
    }
    return sum / n;
}

int main()
{
    Employee emp[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter details for employee " << i + 1 << endl;
        emp[i].setData();
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 10; i++)
    {
        emp[i].displayData();
    }

    float avg = averageSalary(emp);
    cout << "\nAverage Salary: " << avg << endl;

    return 0;
}
