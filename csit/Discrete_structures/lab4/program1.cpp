// To Calculate sum of first natural numbers using iteration
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter the number of terms" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers is " << sum << endl;
    return 0;
}