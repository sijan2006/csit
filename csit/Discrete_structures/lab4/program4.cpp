// To implement summation of a user-defined sequence using loop
#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i)

    {
        cin >> t;
        sum += t;
    }
    cout << "Sum of user-defined sequence: " << sum << endl;
    return 0;
}