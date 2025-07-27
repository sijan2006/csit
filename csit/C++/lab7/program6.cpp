// WAP that implements the concept of friend class.
#include <iostream>
using namespace std;

class Details;

class Student
{
private:
    string name;
    int rollNumber;
    string address;

public:
    Student(string n, int r, string addr)
    {
        name = n;
        rollNumber = r;
        address = addr;
    }

    friend class Details;
};

class Details
{
public:
    void showStudentInfo(Student s)
    {
        cout << "Name       : " << s.name << endl;
        cout << "Roll Number: " << s.rollNumber << endl;
        cout << "Address    : " << s.address << endl;
    }
};

int main()
{
    Student stu("Rahul Bhul", 29, "Singha Durbar");
    Details info;
    info.showStudentInfo(stu);

    return 0;
}
