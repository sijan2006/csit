#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, d;
    float r1, r2;
    printf("for a quadratic eqn ax2+bx+c=0 enter a b and c");
    scanf("%d%d%d", &a, &b, &c);
    if ((b * b - 4 * a * c) < 0)
    {
        printf("no real roots");
    }
    else
    {
        r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("roots are %.2f and %.2f", r1, r2);
    }
}