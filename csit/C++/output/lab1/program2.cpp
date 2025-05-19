// 2. WAP to find largest number in a given array.
#include <iostream>
using namespace std;
int main()
{

    int i, arr[20], max = 0;
    int n;
    cout << "enter size of array";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "enter a no";
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "largest nos is" << max;
    return 0;
}
