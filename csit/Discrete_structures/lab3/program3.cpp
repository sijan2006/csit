// wap to compute the nth term of an AP and GP
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, n, d, r;
    cout << "enter a  and no of terms n ans d for AP and r for GP" << endl;
    cin >> a >> n >> d >> r;

    cout << "The nth term of AP is: " << (a + (n - 1) * d) << endl;
    cout << "the nth term of GP is " << (a * pow(r, n - 1)) << endl;
}