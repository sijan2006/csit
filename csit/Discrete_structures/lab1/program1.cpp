// Wap to find the union of two sets
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 10};
    int b[] = {2, 4, 6, 8};
    int u[10];
    int i, j, s1 = 5, s2 = 4;
    cout << "the union of two sets is " << endl;
    for (i = 0; i < s1; i++)
    {
        u[i] = a[i];
        cout << u[i] << " ";
    }
    for (j = 0; j < s2; j++)
    {
        int flag = 0;
        for (i = 0; i < s1; i++)
        {
            if (b[j] == u[i])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            u[s2 + j] = b[j];
            cout << u[s2 + j] << " ";
        }
    }
}