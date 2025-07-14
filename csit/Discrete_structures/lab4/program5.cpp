// To evaluate E(2i+1)to n both recursively and iteratively
#include <iostream>
using namespace std;
int recursiveSum(int i, int n)
{
    if (i > n)
        return 0;
    return (2 * i + 1) + recursiveSum(i + 1, n);
}
int main()
{
    int n = 5;
    intsum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += (2 * i + 1);
    }
    cout << "Iterative Sum of Σ(2i + 1) from 1 to " << n << " = "
         << sum << endl;
    cout << "Recursive Sum of Σ(2i + 1) from 1 to " << n << " = "
         << recursiveSum(1, n) << endl;
    return 0;
}