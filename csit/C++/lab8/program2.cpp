/*
 Define a class Time with following specification's;
a) Data members:
i) Hour
ii) Minutes
b) Constructors to assign values
I
i) Default constructor to initialize; Hour-Minutes= 0. ii) Parameterized constructor to assign some values..
c) Member functions:
i) Add Time () to add two time objects ii) Display () to display Hour and Minutes
*/
#include <iostream>
using namespace std;

class Time
{
private:
    int Hour;
    int Minutes;

public:
    Time()
    {
        Hour = 0;
        Minutes = 0;
    }

    Time(int h, int m)
    {
        Hour = h;
        Minutes = m;
    }

    Time AddTime(Time t)
    {
        Time temp;
        temp.Minutes = Minutes + t.Minutes;
        temp.Hour = Hour + t.Hour + (temp.Minutes / 60);
        temp.Minutes = temp.Minutes % 60;
        return temp;
    }

    void Display()
    {
        cout << "Hour: " << Hour << ", Minutes: " << Minutes << endl;
    }
};

int main()
{
    Time t1(2, 45);
    Time t2(1, 30);
    Time t3;

    t3 = t1.AddTime(t2);
    t3.Display();

    return 0;
}
