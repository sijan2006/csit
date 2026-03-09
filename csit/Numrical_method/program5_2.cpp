#include <stdio.h>

int main()
{

    int n = 5;

    float x[] = {2, 3, 4, 5, 6};
    float y[] = {5, 6, 7, 9, 10};

    float sx = 0, sy = 0, sxy = 0, sxx = 0;

    for (int i = 0; i < n; i++)
    {
        sx += x[i];
        sy += y[i];
        sxy += x[i] * y[i];
        sxx += x[i] * x[i];
    }

    float b = (n * sxy - sx * sy) / (n * sxx - sx * sx);
    float a = (sy / n) - b * (sx / n);

    printf("Best Fit Line: y = %.3f + %.3fx\n", a, b);

    return 0;
}