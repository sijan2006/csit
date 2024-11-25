#include <stdio.h>
void main()
{
    int i, j, arr[100][100], a, b;
    printf("enter the row and column for the matrix ");
    scanf("%d%d", &a, &b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("enter the %d%d element of the matrix ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n the transpose of the matrix is \n");
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d \t ", arr[j][i]);
        }
        printf("\n");
    }
}