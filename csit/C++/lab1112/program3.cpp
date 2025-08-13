/*
There are two classes called student and lecturer.
Derive a class person from both student and lecturer publicly.
The attributes of class Student are sname, roll, disp () and attributes of Lecturer are Iname, age, disp().
 Attributes of person is only member function disp ().
Now enter the details of student and lecturer and display their details. (Ambiguity problem)
*/
#include <iostream>
using namespace std;

class Student
{
protected:
    string sname;
    int roll;

public:
    void setStudent()
    {
        cout << "Enter Student Name: ";
        getline(cin, sname);
        cout << "Enter Roll: ";
        cin >> roll;
        cin.ignore();
    }
    void disp()
    {
        cout << "Student Name: " << sname << "\nRoll: " << roll << endl;
    }
};

class Lecturer
{
protected:
    string lname;
    int age;

public:
    void setLecturer()
    {
        cout << "Enter Lecturer Name: ";
        getline(cin, lname);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }
    void disp()
    {
        cout << "Lecturer Name: " << lname << "\nAge: " << age << endl;
    }
};

class Person : public Student, public Lecturer
{
public:
    void disp()
    {
        Student::disp();
        Lecturer::disp();
    }
};

int main()
{
    Person p;
    cout << "Enter Student Details:\n";
    p.setStudent();
    cout << "\nEnter Lecturer Details:\n";
    p.setLecturer();

    cout << "\nDisplaying Details:\n";
    p.disp();

    return 0;
}
