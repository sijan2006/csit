/*
WAP to overload unary minus (-) operator to invert sign of data members of
 a Point object (data members X-coordinate, and Y-coordinate) using friend function.
*/
#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    friend Point operator-(Point p);
    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

Point operator-(Point p)
{
    return Point(-p.x, -p.y);
}

int main()
{
    Point p1(3, -4), p2;
    p2 = -p1;
    p2.display();
    return 0;
}
