#include <stdio.h>
void main()
{
    int i, x, n, pow = 1;
    printf("enter the number X and the value to which the power is to be raised");
    scanf("%d%d", &x, &n);
    for (i = 1; i <= n; i++)
    {
        pow = pow * x;
    }
    printf(" %d to the power %d is %d", x, n, pow);
}