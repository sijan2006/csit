// To compute the sum of the first n numbers using a recursive function
#include <iostream>
using namespace std;
int sumOdd(int n)
{
    if (n == 1)
        return 1;
    return (2 * n - 1) + sumOdd(n - 1);
}
int main()
{
    int n = 5;
    cout << "Sum of first " << n << " odd numbers: " << sumOdd(n)
         << endl;
    return 0;
}