/*
define a structure employee with following specification (structures in c++)
a) data members : name ,age ,salary
b) member functions : getdata() to assign initial values and display() to display name and age
*/
#include <iostream>
#include <iomanip>
using namespace std;
struct employee
{
    string name;
    int age;
    float salary;
    void getdata()
    {
        cout << "enter name ";
        getline(cin, name);
        cout << "enter the age and salary" << endl;
        cin >> age >> salary;
    }
    void display()
    {
        cout << "the name is " << name << endl
             << "the age is " << age << endl
             << "the salary is " << salary << endl;
    }
} e;
int main()
{
    e.getdata();
    e.display();

    return 0;
}