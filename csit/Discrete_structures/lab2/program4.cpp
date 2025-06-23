// Write a program to compute inverse of a function if it exists
#include <iostream>
using namespace std;
int implement(int x)
{
    return (x + 1);
}
int main()
{
    int x[] = {2, 1, 0, 9, 5};
    int y[] = {3, 2, 1, 10, 6};
    int i, j;
    int found = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (implement(x[i]) == y[j])
            {
                found++;
            }
        }
    }
    if (found == 0)
    {
        cout << "the inverse values are ";
        for (i = 0; i < 5; i++)
        {
            cout << "f^-1(" << y[i] << ") =" << x[i] << endl;
        }
    }
    else
    {
        cout << "the inverse of the function doesnot exists ";
    }
    return 0;
}