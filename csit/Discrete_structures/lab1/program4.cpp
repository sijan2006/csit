// Wap to find if a set is subset of another set

#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 10};
    int b[] = {2, 3};
    int i, j, s1 = 5, s2 = 2;
    for (j = 0; j < s2; j++)
    {
        int count = 0;
        for (i = 0; i < s1; i++)
        {
            if (a[i] == b[j])
            {
                count++;
                break;
            }
        }
        if (!count)
        {
            cout << " the given set  Bis not a subset of the super set A";
            return 0;
        }
    }
    cout << " the set B is subset of the given super set A ";
    return 0;
}