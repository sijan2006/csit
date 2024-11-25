#include <stdio.h>
void main()
{
    int n;
    float sum;
    printf("how many terms of the series 1 ,1+2,1+2+3 ....   do you like to find");
    scanf("%d", &n);
    sum = (n * (n + 1) * (n + 2)) / 6.0;
    printf("the sum of the series 1 ,1+2,1+2+3 ....   is %.2f ", sum);
}