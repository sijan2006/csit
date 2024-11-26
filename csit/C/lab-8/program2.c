#include <stdio.h>
int pow_num(int, int);
void main()
{
    int x, n, pow;
    printf("enter the value of x and n ");
    scanf("%d%d", &x, &n);
    pow = pow_num(x, n);
    printf("the powered number is %d", pow);
}
int pow_num(int x, int n)
{
    int i, p = 1;
    for (i = 1; i <= n; i++)
    {
        p = p * x;
    }
    return p;
}