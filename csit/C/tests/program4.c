#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter the number of  geda  terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d ", c);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
// 1 1 2 3 5
