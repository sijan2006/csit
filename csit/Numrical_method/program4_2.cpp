#include <stdio.h>

int main()
{
    int n = 5;
    float xd[] = {10, 12, 14, 16, 18}; // x-values
    float fx[] = {11, 13, 17, 23, 31}; // y-values
    float xe = 17;                     // value to interpolate
    float sum = fx[n - 1], mul = 1;
    float s = (xe - xd[n - 1]) / (xd[1] - xd[0]);
    int f = 1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            fx[j] = fx[j + 1] - fx[j]; // calculate backward difference
        }
        f *= (i + 1);
        mul *= (s + i) / f;
        sum += mul * fx[n - i - 2];
    }

    printf("Backward interpolation value: %.4f\n", sum);
    return 0;
}