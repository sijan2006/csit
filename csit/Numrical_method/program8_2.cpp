#include <stdio.h>
#include <math.h>
#define MAX 10
int main()
{
    float a[MAX][MAX + 1], x[MAX];
    int n, i, j, k;
    float factor;
    printf("Enter the number of equations: ");
    scanf("%d", &n);
    printf("Enter the augmented matrix (coefficients + constants):\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            printf("a[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    for (k = 0; k < n; k++)
    {
        float pivot = a[k][k];
        for (j = k; j <= n; j++)
        {
            a[k][j] = a[k][j] / pivot;
        }
        for (i = 0; i < n; i++)
        {
            if (i != k)
            {
                factor = a[i][k];
                for (j = k; j <= n; j++)
                {
                    a[i][j] = a[i][j] - factor * a[k][j];
                }
            }
        }
    }
    printf("\nSolution:\n");
    for (i = 0; i < n; i++)
    {
        printf("x[%d] = %.4f\n", i + 1, a[i][n]);
    }
    return 0;
}