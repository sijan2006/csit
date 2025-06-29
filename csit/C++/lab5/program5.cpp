/**
 * 5. Define a class STUDENT with following specifications: a. Data Members
i. name of the student ii. roll number
iii. address
b. Member Functions
i. To receive data values
ii. To display data of student objects.
Your program should accept and display data about 10 different students.
*/
#include <iostream>
#include <string>
using namespace std;

class STUDENT
{
private:
    string name;
    int roll_no;
    string address;

public:
    void getData()
    {
        cout << "Enter name, roll number, and address: ";
        cin >> name >> roll_no >> address;
    }

    void display()
    {
        cout << "Name: " << name << ", Roll No: " << roll_no << ", Address: " << address << endl;
    }
};

int main()
{
    STUDENT students[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].getData();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 10; i++)
    {
        students[i].display();
    }

    return 0;
}
