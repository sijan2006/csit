#include <stdio.h>
void main()
{
    int a, b, c;
    float avg;
    printf("enter the marks in 3 subject : \n");
    scanf("%d%d%d", &a, &b, &c);
    avg = (a + b + c) / 3.0;
    printf("the average is  %.2f", avg);
}