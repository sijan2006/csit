#include <stdio.h>
#include <math.h>
void main()
{
    int i, j, product;
    printf("\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            product = i * j;
            printf("%d \t", product);
        }
        printf("\n");
    }
}