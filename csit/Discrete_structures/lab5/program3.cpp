// To find and display all prime numbers between 1 and N.
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
        {
            return 0;
        }

    return 1;
}

int main()
{
    int n;
    cout << "enter value of n ";
    cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
