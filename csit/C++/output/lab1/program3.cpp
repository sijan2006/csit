// 3. WAP to find factorial of a given number.

#include <iostream>
using namespace std;
int main()
{
    int i, fact = 1;
    int n;
    cout << "enter a no";
    cin >> n;
    for (i = 1; i <= n; i++)
    {

        fact *= i;
    }
    cout << "fact=" << fact;
    return 0;
}