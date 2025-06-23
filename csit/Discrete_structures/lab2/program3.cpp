// Check whether a function is one to one by ensuring unique outputs
#include <iostream>
using namespace std;

int main()
{
    int x[] = {-2, -1, 0, 1, 2};
    int y[] = {5, 2, 1, 4, 9};
    int i, j;
    int found = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (y[i] == y[j])
            {
                if (i == j)
                {
                    continue;
                }
                found++;
            }
        }
    }
    if (found == 0)
    {
        cout << "the given function is one to one ";
    }
    else
    {
        cout << "the given function is not one to one ";
    }
    return 0;
}