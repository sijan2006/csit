// To implement summation of a user-defined sequence using loop
#include <iostream> using
namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += (i * i + 1);
    }
    cout << "Sum of user-defined sequence: " << sum << endl;
    return 0;
}