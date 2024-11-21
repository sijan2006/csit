#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    float s, area;
    printf("enter the sides of the triangle : \n");
    scanf("%d%d%d", &a, &b, &c);
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area of triangle is %.2f", area);
}