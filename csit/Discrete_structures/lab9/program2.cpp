// Modify the program to handle combinations with repetition using the formula C(n+r-1, r).
#include <stdio.h>
int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    int nCr = factorial(n + r - 1) / (factorial(r) * factorial(n - 1));
    printf("Combination with repetition (C(n+r-1, r)) = %d\n", nCr);
    return 0;
}
