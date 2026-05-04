#include <stdio.h>
#include <math.h>

float f(float x)
{
    return sqrt(1 + x);
}

int main()
{

    int n = 4;
    float a = 0, b = 2;
    float h = (b - a) / n;

    float sum = f(a) + f(b);
    float x = a;

    for (int i = 1; i < n; i++)
    {

        x += h;

        if (i % 2 == 0)
            sum += 2 * f(x);
        else
            sum += 4 * f(x);
    }

    sum = (h / 3) * sum;

    printf("Integral value: %f", sum);

    return 0;
}