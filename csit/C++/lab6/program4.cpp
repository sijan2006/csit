/**
 * /**
 * Create a class Distance with  member function ft and inch Defina a member function that calculates max distance among 3 distance objects
 *  .
 */
#include <iostream>
using namespace std;

class Distance
{
    int ft, inch;

public:
    void input()
    {
        cin >> ft >> inch;
        if (inch >= 12)
        {
            ft += inch / 12;
            inch %= 12;
        }
    }

    void show()
    {
        cout << ft << "ft " << inch << "in" << endl;
    }

    int toInches()
    {
        return ft * 12 + inch;
    }

    static Distance max(Distance d1, Distance d2, Distance d3)
    {
        int i1 = d1.toInches();
        int i2 = d2.toInches();
        int i3 = d3.toInches();
        int maxInch = i1;
        if (i2 > maxInch)
            maxInch = i2;
        if (i3 > maxInch)
            maxInch = i3;

        Distance maxD;
        maxD.ft = maxInch / 12;
        maxD.inch = maxInch % 12;
        return maxD;
    }
};

int main()
{
    Distance d1, d2, d3, dmax;
    d1.input();
    d2.input();
    d3.input();
    dmax = Distance::max(d1, d2, d3);
    dmax.show();
    return 0;
}
