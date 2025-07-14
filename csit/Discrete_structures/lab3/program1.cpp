// Generate an ap for the given first term a common diff d and no of terms n
#include <iostream>
using namespace std;
int main()
{
    int a, n, d, i;
    cout << "enter a  d and n ";
    cin >> a >> d >> n;
    for (i = 1; i <= n; i++)
    {
        cout << " " << (a + (i - 1) * d);
    }
}