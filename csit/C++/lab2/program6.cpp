/*
Create a namespace employee_details place name age id inside the name space .Define a function
named Data_entry() to enter values of name age id and salary also define another functionCalc_tax()
to calculate the tax details
Given tax rate :
Salary<15000=>2%
15000<=Salary<=20000=>5%
salay>20000=>10%
*/
#include <iostream>
using namespace std;

namespace employee_details
{
    string name;
    int age;
    int id;
    float salary;

    void Data_entry()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void Calc_tax()
    {
        float tax = 0;
        if (salary < 15000)
            tax = salary * 0.02;
        else if (salary <= 20000)
            tax = salary * 0.05;
        else
            tax = salary * 0.10;
        cout << "Tax to be paid: " << tax << endl;
    }
}

int main()
{
    employee_details::Data_entry();
    employee_details::Calc_tax();
    return 0;
}
