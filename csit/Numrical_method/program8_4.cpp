#include <stdio.h>
#include <math.h>
#define MAX 10
#define TOLERANCE 0.0001
#define MAX_ITER 100
int main()
{
    float a[MAX][MAX + 1], x[MAX], x_old[MAX];
    int n, i, j, iter;
    float error, max_error;
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
    for (i = 0; i < n; i++)
    {
        x[i] = 0.0;
    }
    printf("\n%-10s", "Iteration");
    for (i = 0; i < n; i++)
    {
        printf("x[%d]%-8s", i + 1, "");
    }
    printf("\n");
    for (iter = 1; iter <= MAX_ITER; iter++)
    {
        for (i = 0; i < n; i++)
        {
            x_old[i] = x[i];
        }
        for (i = 0; i < n; i++)
        {
            x[i] = a[i][n];
            for (j = 0; j < n; j++)
            {
                if (j != i)
                {
                    x[i] -= a[i][j] * x[j];
                }
            }
            x[i] /= a[i][i];
        }
        printf("%-10d", iter);
        for (i = 0; i < n; i++)
        {
            printf("%-13.4f", x[i]);
        }
        printf("\n");
        max_error = 0.0;
        for (i = 0; i < n; i++)
        {
            error = fabs(x[i] - x_old[i]);
            if (error > max_error)
            {
                max_error = error;
            }
        }
        if (max_error < TOLERANCE)
        {
            printf("\nConverged after %d iterations.\n", iter);
            break;
        }
    }
    printf("\nSolution:\n");
    for (i = 0; i < n; i++)
    {
        printf("x[%d] = %.4f\n", i + 1, x[i]);
    }
    return 0;
}