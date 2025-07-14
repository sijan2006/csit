// generate an gp for a given na common ratio and no of terms
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, n, r, i;
    cout << "enter a  r and n ";
    cin >> a >> r >> n;
    for (i = 1; i <= n; i++)
    {
        cout << " " << (a * pow(r, i - 1));
    }
}