/**
 * /**
 * Wap to create a class calles point with data menbers x coordinate and y coordinate construct different member function with following operations
 * a) to input data
 * b)to show data of point objects
 * c)to find distance betwn two points
 *
 */
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    float x, y;

public:
    void input()
    {
        cin >> x >> y;
    }

    void show()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    float distance(Point p)
    {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }
};

int main()
{
    Point p1, p2;
    p1.input();
    p2.input();
    cout << p1.distance(p2) << endl;
    return 0;
}
