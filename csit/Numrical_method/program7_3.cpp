#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x + 2;
}

int main()
{

    int n = 6;
    float a = 1, b = 3;
    float h = (b - a) / n;

    float sum = f(a) + f(b);
    float x = a;

    for (int i = 1; i < n; i++)
    {

        x += h;

        if (i % 3 == 0)
            sum += 2 * f(x);
        else
            sum += 3 * f(x);
    }

    sum = sum * (3 * h / 8);

    printf("Integral value: %f", sum);

    return 0;
}