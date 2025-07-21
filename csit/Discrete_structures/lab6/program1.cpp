// WAP to implement the concepts of matrix addition and subtraction
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    int A[100][100], B[100][100], sum[100][100], diff[100][100];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> A[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> B[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
        }

    cout << "Matrix Addition:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    cout << "Matrix Subtraction:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << diff[i][j] << " ";
        cout << endl;
    }

    return 0;
}
