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
    for (k = 0; k < n - 1; k++)
    {
        for (i = k + 1; i < n; i++)
        {
            factor = a[i][k] / a[k][k];
            for (j = k; j <= n; j++)
            {
                a[i][j] = a[i][j] - factor * a[k][j];
            }
        }
    }
    for (i = n - 1; i >= 0; i--)
    {
        x[i] = a[i][n];
        for (j = i + 1; j < n; j++)
        {
            x[i] = x[i] - a[i][j] * x[j];
        }
        x[i] = x[i] / a[i][i];
    }
    printf("\nSolution:\n");
    for (i = 0; i < n; i++)
    {
        printf("x[%d] = %.4f\n", i + 1, x[i]);
    }
    return 0;
}