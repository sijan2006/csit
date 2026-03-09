#include <stdio.h>

int main()
{

    int n = 4;
    float xe = 2.0;

    float x[] = {2.0, 2.5, 3.0, 3.5, 4.0};
    float y[] = {4.0, 6.25, 9.0, 12.25, 16.0};

    float h = x[1] - x[0];
    float s = (xe - x[0]) / h;

    float diff[3];
    float result = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            y[j] = y[j + 1] - y[j];
        }
        diff[i] = y[0];
    }

    result += (diff[0] + ((2 * s - 1) * diff[1] / 2) + ((3 * s * s - 6 * s + 2) * diff[2] / 6)) / h;
    printf("First Derivative: %.3f\n", result);

    result = 0;
    result += (diff[1] + (s - 1) * diff[2]) / (h * h);
    printf("Second Derivative: %.3f\n", result);

    return 0;
}