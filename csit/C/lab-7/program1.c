#include <stdio.h>
void main()
{
    int i, arr[5], sum = 0;
    for (i = 0; i < 5; i++)
    {
        printf("enter the %d element of the array", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("the sum of numbers in the array is %d", sum);
}