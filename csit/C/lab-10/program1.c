#include <stdio.h>
void main()
{
    int a, b, *p1, *p2;
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    p1 = &a;
    p2 = &b;
    printf("the sum of numbers is %d", (*p1) + (*p2));
}