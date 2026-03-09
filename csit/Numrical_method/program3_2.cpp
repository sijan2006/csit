#include <stdio.h>

int main()
{
    int n = 4;
    float x = 5;                // value to interpolate
    float xd[] = {1, 3, 4, 7};  // x-values
    float fx[] = {2, 6, 9, 15}; // corresponding y-values
    float sum = fx[0];
    float mul = 1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            fx[j] = (fx[j + 1] - fx[j]) / (xd[j + i + 1] - xd[j]);
        }
        mul *= (x - xd[i]);
        sum += mul * fx[0];
    }

    printf("Interpolated value: %.4f\n", sum);
    return 0;
}