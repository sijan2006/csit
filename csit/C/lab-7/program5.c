#include <stdio.h>
void main()
{
    int i, j, arra[2][2], arrb[2][2], arrs[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter element for arra[%d][%d]: ", i, j);
            scanf("%d", &arra[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter element for arrb[%d][%d]: ", i, j);
            scanf("%d", &arrb[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == 0)
            {
                arrs[i][j] = arra[i][i] * arrb[i][j] + arra[i][i + 1] * arrb[i + 1][j];
            }
            else
            {
                arrs[i][j] = arra[i][i - 1] * arrb[i - 1][j] + arra[i][i] * arrb[i][j];
            }
        }
    }
    /* arrs[0][0] = arra[0][0] * arrb[0][0] + arra[0][1] * arrb[1][0];
     arrs[0][1] = arra[0][0] * arrb[0][1] + arra[0][1] * arrb[1][1];
     arrs[1][0] = arra[1][0] * arrb[0][0] + arra[1][1] * arrb[1][0];
     arrs[1][1] = arra[1][0] * arrb[0][1] + arra[1][1] * arrb[1][1]; */
    printf("\n matrix multiplication is \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d: ", arrs[i][j]);
        }
    }
}