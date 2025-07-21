// Wap to implement relation matrix and check reflexivity symmetry
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

    int isReflexive = 1;
    for (int i = 0; i < n; i++)
    {
        if (relation[i][i] != 1)
        {
            isReflexive = 0;
            break;
        }
    }

    int isSymmetric = 1;
    for (int i = 0; i < n && isSymmetric; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (relation[i][j] != relation[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isReflexive)
        cout << "Relation is Reflexive" << endl;
    else
        cout << "Relation is Not Reflexive" << endl;

    if (isSymmetric)
        cout << "Relation is Symmetric" << endl;
    else
        cout << "Relation is Not Symmetric" << endl;

    return 0;
}
