#include <stdio.h>
void main()
{
    int i, j, k = 5;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("1");
        }
    }
    printf("\n");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 3; j++)
        {
            printf("1");
        }
    }
    printf("\n");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 1; j++)
        {
            printf("1");
        }
    }
}