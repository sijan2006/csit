// Wap to find the intersection of two sets
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 10};
    int b[] = {2, 4, 6, 8};
    int u[10];
    int i, j, s1 = 5, s2 = 4, count = 0;
    cout << "the intersection of two sets is " << endl;

    for (j = 0; j < s2; j++)
    {
        for (i = 0; i < s1; i++)
        {
            if (b[j] == a[i])
            {
                u[count++] = b[j];
                break;
            }
        }
    }
    for (i = 0; i < count; i++)
    {
        cout << u[i] << " ";
    }
}