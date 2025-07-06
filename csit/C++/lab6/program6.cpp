/**
 * Create a class company eith data members ename eaddress and eid eid is a static data membereid of the first employee must be 100
 * of second be 101 and so on  define member function to input and show the data .Also defina a static member count employee to count total no
 * of employees
 *
 */
#include <iostream>
#include <string>
using namespace std;

class Company
{
    string ename, eaddress;
    int eid;
    static int count;

public:
    void input()
    {
        cout << "Enter name and address: ";
        cin >> ename >> eaddress;
        eid = count++;
    }

    void show()
    {
        cout << "ID: " << eid << ", Name: " << ename << ", Address: " << eaddress << endl;
    }

    static void totalEmployees()
    {
        cout << "Total Employees: " << count << endl;
    }
};

int Company::count = 100;

int main()
{
    Company e1, e2, e3;
    e1.input();
    e2.input();
    e3.input();
    e1.show();
    e2.show();
    e3.show();
    Company::totalEmployees();
    return 0;
}
