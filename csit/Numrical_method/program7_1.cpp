#include <stdio.h>
#include <math.h>

float f(float x)
{
    return 1 / (1 + x);
}

int main()
{

    int n = 6;
    float a = 0, b = 2;
    float h = (b - a) / n;

    float sum = f(a) + f(b);

    for (int i = 1; i < n; i++)
    {
        float x = a + i * h;
        sum += 2 * f(x);
    }

    sum = (h / 2) * sum;

    printf("Integral value: %f\n", sum);

    return 0;
}