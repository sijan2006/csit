// creata a menu driven program to check if a function is one to one or onto or both
#include <iostream>
using namespace std;
int implement(int x)
{
    return (x + 1);
}
int check1(int x[], int y[])
{
    int i, j, found = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (y[i] == y[j])
            {
                found++;
            }
        }
    }
    if (found == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int check2(int x[], int y[], int z[])
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        bool found = false;
        for (j = 0; j < 5; j++)
        {
            if (codomain[i] == y[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int x[] = {2, 1, 0, 9, 5};
    int y[] = {3, 2, 1, 10, 6};
    int z[] = {3, 2, 1, 10, 6};
    int choise;
    cout << "1)check 1 to 1     2) check surjective    3) check both ";
    cin >>
        choise;
    switch (choise)
    {
    case 1:
        if (check1(x, y))
        {
            cout << "the function is one to one";
        }
        else
        {
            cout << "the function is not one to one";
        }
        break;
    case 2:
        if (check2(x, y, z))
        {
            cout << "the function is surjective";
        }
        else
        {
            cout << "the function is not surjective";
        }
        break;
    case 3:
        if (check1(x, y) && check2(x, y, z))
        {
            cout << "the function is bijective";
        }
        else
        {
            cout << "the function is not bijective";
        }
        break;
    default:
        cout << "invalid choise ";
    }
    return 0;
}