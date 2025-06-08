// wap to find square root of a given integer using inline function
#include <iostream>
#include <cmath>
using namespace std;
int sqr(int num);
int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Square root is: " << sqr(num) << endl;
    return 0;
}
int sqr(int num)
{
    return sqrt(num);
}
