#include <stdio.h>

int main()
{
    int n = 4;
    float x = 7;                 // value to interpolate
    float data[] = {2, 4, 6, 8}; // x-values
    float fx[] = {3, 5, 9, 11};  // corresponding y-values
    float L[4], sum = 0;

    for (int i = 0; i < n; i++)
    {
        L[i] = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                L[i] *= (x - data[j]) / (data[i] - data[j]);
            }
        }
        sum += L[i] * fx[i];
    }

    printf("Interpolated value: %.4f\n", sum);
    return 0;
}