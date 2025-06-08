// wap to fins the are of triangle, rectangle, sqare and circle by overloading the area function
#include <iostream>
using namespace std;
float area(float l, float b);
float area(float r);
int area(int l, int b);
int area(int l);
int main()
{
    int l, b, r;
    cout << "enter length breadth for the shapes and radius for the circle " << endl;
    cin >> l >> b >> r;
    cout << "area of triangle is " << area((float)l, (float)b) << endl;
    cout << "area of rectangle is " << area(l, b) << endl;
    cout << "area of square is " << area(l) << endl;
    cout << "area of circle is " << area((float)r) << endl;
}
float area(float l, float b)
{
    return 0.5 * l * b;
}
int area(int l, int b)
{
    return l * b;
}
int area(int l)
{
    return l * l;
}
float area(float r)
{
    return 3.14 * r * r;
}