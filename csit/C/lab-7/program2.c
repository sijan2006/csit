#include <stdio.h>
void main()
{
    int i, arr[10], min, max;
    printf("enter 1 element of the array");
    scanf("%d", &arr[0]);
    min = arr[0];
    max = arr[0];
    for (i = 1; i < 10; i++)
    {
        printf("enter the %d element of the array", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("the min number is %d and max number is %d", min, max);
}