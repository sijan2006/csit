#include <stdio.h>

int main()
{
    int n = 4;
    float a[4] = {-7, 4, -3, 4};
    float b[n], x = 2;

    b[n - 1] = a[n - 1];
    n--;

    while (n > 0)
    {
        b[n - 1] = a[n - 1] + b[n] * x;
        n--;
    }

    printf("Value of polynomial: %.3f", b[0]);
    return 0;
}