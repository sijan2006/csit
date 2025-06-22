/*
define a structure student  with following specification (structures in c++)
a) data members for name rolls and total marks
b) member functions for initializing and displaying data
also creata a member function that calculates percentage of total marks based on full marks supplied by the user
*/
#include <iostream>
using namespace std;
struct employee
{
    string name;
    int roll;
    float total_marks;
    void getdata()
    {
        cout << "enter name ";
        getline(cin, name);
        cout << "enter the roll no and total marks " << endl;
        cin >> roll >> total_marks;
    }
    void display()
    {
        cout << "the name is " << name << endl
             << "the roll no is " << roll << endl
             << "the total marks  is " << total_marks << endl;
    }
    void calcpercentage(float fullmarks)
    {
        float percentage = (total_marks / fullmarks) * 100;
        cout << "the percentage is " << percentage << endl;
    }
} e;
int main()
{
    e.getdata();
    e.display();
    int full_marks;
    cout << "enter full marks ";
    cin >> full_marks;
    e.calcpercentage(full_marks);
    return 0;
}