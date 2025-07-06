/**
 * Create a class matrix Define a member function to find the transpose of given matrix object.the member function should return a transposed matrix object .
 */
#include <iostream>
using namespace std;

class Matrix
{
    int a[10][10], rows, cols;

public:
    void input(int r, int c)
    {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> a[i][j];
    }

    void show()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    Matrix transpose()
    {
        Matrix t;
        t.rows = cols;
        t.cols = rows;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                t.a[j][i] = a[i][j];
        return t;
    }
};

int main()
{
    Matrix m1, m2;
    int r, c;
    cin >> r >> c;
    m1.input(r, c);
    m2 = m1.transpose();
    m2.show();
    return 0;
}
