#include <stdio.h>
#include <math.h>

float f(float x) { return pow(x, 4) - 4 * x - 4; }

int main()
{
    float x0 = 3, x1 = 4, x2, f0, f1, err;

    do
    {
        f0 = f(x0);
        f1 = f(x1);

        x2 = x1 - (f1 * (x1 - x0)) / (f1 - f0);
        err = fabs((x2 - x1) / x2);

        x0 = x1;
        x1 = x2;

    } while (err > 0.0001);

    printf("Root: %.4lf", x2);
    return 0;
}