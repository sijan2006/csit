#include <stdio.h>

int main()
{

    int n = 5;
    float xe = 12;

    float x[] = {8, 9, 10, 11, 12};
    float y[] = {15, 19, 24, 30, 37};

    float h = x[1] - x[0];
    float s = (xe - x[n - 1]) / h;

    float diff[3];
    float result = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            y[j] = y[j + 1] - y[j];
        }
        diff[i] = y[n - i - 2];
    }

    result += (diff[0] + ((2 * s + 1) * diff[1] / 2) + ((3 * s * s + 6 * s + 2) * diff[2] / 6)) / h;
    printf("First Derivative: %.3f\n", result);

    result = 0;
    result += (diff[1] + (6 * s + 6) * diff[2] / 6) / (h * h);
    printf("Second Derivative: %.3f\n", result);

    return 0;
}