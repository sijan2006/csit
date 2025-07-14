// To Calculate the sum of squares of the first n natural numbers
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter the number of terms" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum += pow(i, 2);
    }
    cout << "Sum of first " << n << " natural numbers is " << sum << endl;
    return 0;
}