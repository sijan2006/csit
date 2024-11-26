#include <stdio.h>
void check(int *p1, int *p2, int n);
void main()
{
    int n, min, max = 0, *p1, *p2, i, num;
    printf("how many numbers do you like to enter  ?");
    scanf("%d", &n);
    printf("enter first number");
    scanf("%d", &min);
    p1 = &max;
    p2 = &min;
    for (i = 1; i < n; i++)
    {
        printf("enter %d number \t", i + 1);
        scanf("%d", &num);
        check(p1, p2, num);
    }
    printf("\n max is %d and min is %d", (*p1), (*p2));
}
void check(int *p1, int *p2, int number)
{
    if (number > (*p1))
    {
        *p1 = number;
    }
    if (number < (*p2))
    {
        *p2 = number;
    }
}