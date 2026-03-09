#include <stdio.h>

int main()
{
    int n = 4;
    float xd[] = {2, 4, 6, 8};  // x-values
    float fx[] = {3, 5, 9, 15}; // corresponding y-values
    float xe = 5;               // value to interpolate
    float sum = fx[0], mul = 1;
    float s = (xe - xd[0]) / (xd[1] - xd[0]);
    int f = 1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            fx[j] = fx[j + 1] - fx[j]; // calculate forward difference
        }
        f *= (i + 1);
        mul *= (s - i) / f;
        sum += mul * fx[0];
    }

    printf("Forward interpolation value: %.4f\n", sum);
    return 0;
}