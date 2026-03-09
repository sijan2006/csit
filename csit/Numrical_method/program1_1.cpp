#include <math.h>
#include <stdio.h>

float f(float x) { return pow(x, 3) - 3 * x - 7.8; }

int main()
{
    float a = 1, b = 2, error, mid, prevError = 0;

    do
    {
        mid = (a + b) / 2;
        error = fabs((a - b) / b);

        if (error == prevError)
            break;

        prevError = error;

        if (f(mid) < 0)
        {
            a = mid;
        }
        else
        {
            b = mid;
        }

    } while (error >= 0.0001);

    printf("\n Root: %.3f \n", mid);
    return 0;
}