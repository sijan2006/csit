#include <stdio.h>
void main()
{
    int i, sum = 0;
    for (i = 1; i < 5; i++)
    {
        sum += i;
    }
    printf("the sum of first five natural number is %d", sum);
}