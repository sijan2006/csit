// modify your program to find the sum of ap and gp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, n, d, r;
    cout << "enter a  and no of terms n ans d for AP and r for GP" << endl;
    cin >> a >> n >> d >> r;

    cout << "The sum of  nth terms in AP is: " << ((n / 2) * (2 * a + (n - 1) * d)) << endl;
    cout << "the sum of nth terms of GP is " << ((a * (1 - pow(r, n))) / (1 - r)) << endl;
    return 0;
}
