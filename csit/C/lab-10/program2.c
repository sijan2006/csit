#include <stdio.h>
void swap(int *p1, int *p2, int *p3);
void main()
{
    int a, b, c, *p1, *p2, *p3;
    printf("enter 3 numbers ");
    scanf("%d%d%d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    swap(p1, p2, p3);
    printf("the numbers are %d %d and %d respectively", *p1, *p2, *p3);
}
void swap(int *p1, int *p2, int *p3)
{
    int temp1, temp2;
    temp1 = *p1;
    temp2 = *p2;
    *p1 = *p3;
    *p2 = temp1;
    *p3 = temp2;
}