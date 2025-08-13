/*
. Create a class called Lecturer that stores the ID, and the name of lecturers.
From this class derive two classes: Part Time,
which adds payperhr (type float); and FullTime,
which adds paypermonth (type float). Each of these three classes should have
a setdata () function to get its data from the user, and
a display () function to display its data.
Write a complete program to accept the value for each attribute of each class and display the information.
*/
#include <iostream>
using namespace std;

class Lecturer
{
protected:
    int id;
    string name;

public:
    void setdata()
    {
        cout << "Enter Lecturer ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Lecturer Name: ";
        getline(cin, name);
    }
    void display()
    {
        cout << "ID: " << id << "\nName: " << name << endl;
    }
};

class PartTime : public Lecturer
{
    float payperhr;

public:
    void setdata()
    {
        Lecturer::setdata();
        cout << "Enter Pay per Hour: ";
        cin >> payperhr;
    }
    void display()
    {
        Lecturer::display();
        cout << "Pay per Hour: " << payperhr << endl;
    }
};

class FullTime : public Lecturer
{
    float paypermonth;

public:
    void setdata()
    {
        Lecturer::setdata();
        cout << "Enter Pay per Month: ";
        cin >> paypermonth;
    }
    void display()
    {
        Lecturer::display();
        cout << "Pay per Month: " << paypermonth << endl;
    }
};

int main()
{
    PartTime p;
    FullTime f;

    cout << "Enter Part-Time Lecturer Details:\n";
    p.setdata();
    cout << "\nEnter Full-Time Lecturer Details:\n";
    f.setdata();

    cout << "\nPart-Time Lecturer Information:\n";
    p.display();
    cout << "\nFull-Time Lecturer Information:\n";
    f.display();

    return 0;
}
