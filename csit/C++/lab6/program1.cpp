/**
 * Wap to create a class calles time with data menbers hr min and second construct different member function with following operations
 * a) to input data
 * b)to show data of time objects
 * c)to add two time objects
 */

#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;

public:
    void input()
    {
        cin >> hr >> min >> sec;
    }

    void show()
    {
        cout << hr << "h " << min << "m " << sec << "s" << endl;
    }

    Time add(Time t)
    {
        Time temp;
        temp.sec = sec + t.sec;
        temp.min = min + t.min + temp.sec / 60;
        temp.sec %= 60;
        temp.hr = hr + t.hr + temp.min / 60;
        temp.min %= 60;
        return temp;
    }
};

int main()
{
    Time t1, t2, t3;
    t1.input();
    t2.input();
    t3 = t1.add(t2);
    t3.show();
    return 0;
}
