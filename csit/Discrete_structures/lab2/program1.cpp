// WAP a program to implement x^2+1 and implement it for domain of -2 -1 0 1 2
#include <iostream>
using namespace std;
int implement(int x)
{
    return (x * x + 1);
}
int main()
{
    int arr[] = {-2, -1, 0, 1, 2};
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "the range is " << implement(arr[i]) << endl;
    }
}