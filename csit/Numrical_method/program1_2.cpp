#include <math.h>
#include <stdio.h>

float f(float x) { return pow(x, 2) - 5 * x + 1; }
float f_prime(float x) { return 5 * pow(x, 2) - 1; }

int main()
{
    float x0 = 2, fx, fpx, x1, error, prevError = 0;

    do
    {
        fx = f(x0);
        fpx = f_prime(x0);
        x1 = x0 - fx / fpx;

        error = fabs((x1 - x0) / x0);
        if (error == prevError)
            break;

        prevError = error;
        x0 = x1;

    } while (error > 0.000005);

    printf("\n Root: %.3f", x0);
    return 0;
}