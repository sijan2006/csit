#include <stdio.h>
void main()
{
    int n, i, arr[50], *p, temp, j;
    printf("enter the size of array");
    scanf("%d", &n);
    p = arr;
    for (i = 0; i < n; i++)
    {
        printf("enter %d element ", i + 1);
        scanf("%d", (p + i));
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    printf("the ascended data is \n ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
    }
}