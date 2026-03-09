#include <stdio.h>
#include <math.h>

float g(float x)
{
    return x * x - 5 * x + 8;
}

int main()
{
    float x1 = 1, x2, err;

    do
    {
        x2 = g(x1);
        err = fabs((x2 - x1) / x2);
        x1 = x2;
    } while (err > 0.0001);

    printf("Root: %.4f\n", x2);
    return 0;
}