#include <stdio.h>
void main()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (i == 1 && j != 0 && j != 5)
            {
                printf(" ");
                continue;
            }
            printf("*");
        }
        printf("\n"); //* * * * * *
    }
}