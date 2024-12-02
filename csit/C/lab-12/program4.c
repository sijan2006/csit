#include <stdio.h>
struct complex
{
    int r1, r2, rsum;
    int i1, i2, isum;
} s;
void main()
{
    printf("enter real and imaginary part of first complex number :");
    scanf("%d%d", &s.r1, &s.i1);
    printf("enter real and imaginary part of second complex number :");
    scanf("%d%d", &s.r2, &s.i2);
    s.rsum = s.r1 + s.r2;
    s.isum = s.i1 + s.i2;
    if (s.isum > 0)
    {
        printf("sum of complex number is %d + %d i", s.rsum, s.isum);
    }
    printf("sum of complex number is %d %d i \t", s.rsum, s.isum);
}