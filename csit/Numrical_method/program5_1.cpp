#include <stdio.h>
#include <math.h>

int main()
{
    int n = 3;
    float x[] = {2, 6, 10};
    float y[] = {1, 4, 7};
    float xp = 5;

    float h[n - 1], M[n];

    for (int i = 0; i < n - 1; i++)
        h[i] = x[i + 1] - x[i];

    M[0] = 0;
    M[n - 1] = 0;

    M[1] = 6 * ((y[2] - y[1]) / h[1] - (y[1] - y[0]) / h[0]) / (2 * (h[0] + h[1]));

    int i = 1;

    float S =
        M[i - 1] * pow(x[i] - xp, 3) / (6 * h[i - 1]) +
        M[i] * pow(xp - x[i - 1], 3) / (6 * h[i - 1]) +
        (y[i - 1] - M[i - 1] * h[i - 1] * h[i - 1] / 6) * (x[i] - xp) / h[i - 1] +
        (y[i] - M[i] * h[i - 1] * h[i - 1] / 6) * (xp - x[i - 1]) / h[i - 1];

    printf("Interpolated value: %.4f\n", S);

    return 0;
}