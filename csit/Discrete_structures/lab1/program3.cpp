// Wap to find the difference of two sets i.e A-B
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 10};
    int b[] = {2, 4, 6, 8};
    int u[10];
    int i, j, s1 = 5, s2 = 4, count = 0;
    cout << "the difference of two sets is " << endl;
    for (j = 0; j < s1; j++)
    {
        int flag = 0;
        for (i = 0; i < s2; i++)
        {
            if (a[j] == b[i])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            u[count++] = a[j];
        }
    }
    for (i = 0; i < count; i++)
    {
        cout << u[i] << " ";
    }
}