#include <stdio.h>
int max_num(int, int, int);
void main()
{
    int num1, num2, num3, max;
    printf("Enter three numbers:");
    scanf("%d%d%d", &num1, &num2, &num3);
    max = max_num(num1, num2, num3);
    printf("the max number is %d", max);
}
int max_num(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}