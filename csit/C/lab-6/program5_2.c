#include <stdio.h>
void main()
{
    int i, j;
    char num = 'a';
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", num + j);
        }
        printf("\n");
    }
}