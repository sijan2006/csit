#include <stdio.h>
void main()
{
    int i, count = 0, num[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (num[i] >= 0)
        {
            count++;
        }
    }
    printf("You have entered %d positive numbers", count);
}