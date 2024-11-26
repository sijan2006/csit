#include <stdio.h>
#include <math.h>
void recurse(int);
void main()
{
    int n;
    printf("enter the nth term of series 1^2-2^2+3^2-......");
    scanf("%d", &n);
    recurse(n);
}
void recurse(int nth)
{
    static int count = 1, sum = 0;
    if (count > nth)
    {
        printf(" \n the sum is %d", sum);
        return;
    }
    if (count % 2 == 0)
    {
        sum -= pow(count, 2);
    }
    if (count % 2 != 0)
    {
        sum += pow(count, 2);
    }
    count++;
    recurse(nth);
}