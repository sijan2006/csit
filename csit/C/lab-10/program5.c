#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, *arr, data, count = 0;
    printf("howmany data do you like to enter ?");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("enter %d element ", i + 1);
        scanf("%d", (arr + i));
    }
    printf("what do you like to search ?");
    scanf("%d", &data);
    for (i = 0; i < n; i++)
    {
        if (data == *(arr + i))
        {
            printf("the element %d is found ", *(arr + i));
            count++;
        }
    }
    if (count == 0)
    {
        printf("the element %d is not found ", data);
    }
    free(arr);
}