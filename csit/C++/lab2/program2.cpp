/*
Wap to write a function  (pass my reference ) that claculates values of x and y from two eqns
ax+by=m
cx+dy=n
*/
#include <iostream>
using namespace std;
void solv(int a, int b, int m, int c, int d, int n, float &x, float &y);
int main()
{
    int a, b, c, d, m, n;
    float x, y;
    cout << "enter value of a b m c d and n " << endl;
    cin >> a >> b >> m >> c >> d >> n;
    solv(a, b, m, c, d, n, x, y);
    cout << " x and y are " << x << " and " << y << endl;
    return 0;
}
void solv(int a, int b, int m, int c, int d, int n, float &x, float &y)
{
    x = (m * d - b * n) / (a * d - c * b);
    y = (a * n - c * m) / (a * d - c * b);
}
