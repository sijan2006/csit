// Wap to check if a matrix is symmetric
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int symmetric = 1;

    for (int i = 0; i < n && symmetric; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        cout << "Symmetric Matrix";
    else
        cout << "Not a Symmetric Matrix";

    return 0;
}
