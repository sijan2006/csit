// 1. WAP to show cascading of I/O operators.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter 3 no";
    cin >> a >> b >> c;
    cout << "the no are:" << a << b << c << " and sum is" << (a + b + c);
    return 0;
}