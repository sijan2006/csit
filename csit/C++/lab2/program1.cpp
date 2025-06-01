/*
Wap to write a function  using reference variables to swap the values id pair if floating point numbers
*/
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "enter two no" << endl;
    cin >> a >> b;
    swap(a, b);
    cout << " no are " << a << " and " << b << endl;
    return 0;
}
void swap(float &a, float &b)
{
    float temp;
    temp = a;
    a = b;
    b = temp;
}