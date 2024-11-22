#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, d, ch;
    float r1, r2;
    printf("for a quadratic eqn ax2+bx+c=0 enter a b and c");
    scanf("%d%d%d", &a, &b, &c);
    ch = b * b - 4 * a * c;
    switch ((ch > 0) - (ch < 0))
    {
    case 1:
        r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("the roots are real and distint : %f and %f", r1, r2);
        break;
    case 0:
        r1 = -b / (2 * a);
        printf("the root is only : %f", r1);
        break;
    default:
        printf("the roots are imaginary");
    }
}