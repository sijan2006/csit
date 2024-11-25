#include <stdio.h>
#include <math.h>
void main()
{
    int count, i, x;
    float sum = 1.0;
    printf("enter the value of x ");
    scanf("%d", &x);
    printf("how many terms to find in the series 1+x-X^2/2+x^3/3+....");
    scanf("%d", &count);
    for (i = 1; i < count; i++)
    {
        if (i % 2 == 0)
        {
            sum -= (pow(x, i)) / i;
        }
        else
        {
            sum += (pow(x, i)) / i;
        }
    }
    printf("sum of the series is %f", sum);
}