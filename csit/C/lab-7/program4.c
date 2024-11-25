#include <stdio.h>
void main()
{
    int i, j, arr[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter the %d%d element of the matrix ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    printf("it is not an identity matrix");
                    break;
                }
            }
            if (i + j == 1)
            {
                if (arr[i][j] != 0)
                {
                    printf("it is not an identity matrix");
                    break;
                }
            }
        }
    }
    printf("the given matrix is an identity matrix");
}