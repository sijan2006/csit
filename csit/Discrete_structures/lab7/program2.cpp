// Wap to find transitive closure using boolean matrix multiplication.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int relation[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> relation[i][j];

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                relation[i][j] = relation[i][j] || (relation[i][k] && relation[k][j]);
            }
        }
    }

    cout << "Transitive Closure:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << relation[i][j] << " ";
        cout << endl;
    }

    return 0;
}
