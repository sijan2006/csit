#include <stdio.h>
void main()
{
    int number, max = 0, i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter  number %d:", i + 1);
        scanf("%d", &number);
        if (number > max)
        {
            max = number;
        }
    }
    printf("the greatest number is %d", max);
}