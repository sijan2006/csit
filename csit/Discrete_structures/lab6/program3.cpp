// Wap to find the transpose of a matrix
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    int a[100][100], transpose[100][100];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = a[i][j];

    cout << "Transposed matrix is:" << endl;

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }

    return 0;
}
