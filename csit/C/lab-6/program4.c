#include <stdio.h>
#include <math.h>
void main()
{
    int count, i, x, fact, j;
    float sum = 1.0;
    printf("enter the value of x ");
    scanf("%d", &x);
    printf("how many terms to find in the series 1-x/1!+x^2/s!-x^3/3!+....");
    scanf("%d", &count);
    for (i = 1; i < count; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact *= j;
        }
        if (i % 2 == 0)
        {
            sum += (pow(x, i)) / fact;
        }
        else
        {
            sum -= (pow(x, i)) / fact;
        }
    }
    printf("sum of the series is %f", sum);
}