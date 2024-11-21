#include <stdio.h>
void main()
{
    int a, b, temp;
    printf("enter a and b : \n");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("the new a and b are %d and %d", a, b);
}