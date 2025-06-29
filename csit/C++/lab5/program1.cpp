/**
 * 1. Define a class EMPLOYEE with following specifications: a. Private Data Members
i. name ii. age
iii. salary
b. MemberFunctions
i. getdata() to assign initial values
ii. display() to display name and age (Define outside of the class)
*/
#include <iostream>
using namespace std;
class EMPLOYEE
{
private:
    char name[20];
    int age;
    float salary;

public:
    void getdata();
    void display();
};

void EMPLOYEE::getdata()
{
    cout << "enter the name age and salary";
    cin >> name >> age >> salary;
}
void EMPLOYEE::display()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
}
int main()
{
    EMPLOYEE e;
    e.getdata();
    e.display();
    return 0;
}